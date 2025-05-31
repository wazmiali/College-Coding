package views;

import dao.UserDAO;
import model.User;
import service.GenerateOTP;
import service.SendOTPService;
import service.UserService;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.sql.SQLException;
import java.util.Scanner;

public class Welcome {

    public void welcomeScreen() {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while (true) {
            System.out.println("\nWelcome to the App");
            System.out.println("Press 1 to login");
            System.out.println("Press 2 to signup");
            System.out.println("Press 0 to exit");

            int choice;
            try {
                choice = Integer.parseInt(br.readLine());
            } catch (IOException | NumberFormatException ex) {
                System.out.println("Invalid input. Please enter 0, 1 or 2.");
                continue;
            }

            switch (choice) {
                case 1 -> login();
                case 2 -> signUp();
                case 0 -> {
                    System.out.println("Goodbye!");
                    System.exit(0);
                }
                default -> System.out.println("Invalid choice. Please try again.");
            }
        }
    }

    private void login() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Email:");
        String email = sc.nextLine().trim();

        try {
            if (UserDAO.isExists(email)) {
                String genOTP = GenerateOTP.getOTP();
                SendOTPService.sendOTP(email, genOTP);
                System.out.println("An OTP has been sent to your email.");
                System.out.println("Enter the OTP:");
                String otp = sc.nextLine().trim();

                if (otp.equals(genOTP)) {
                    System.out.println("Login successful!");
                    new UserView(email).home();
                } else {
                    System.out.println("❌ Wrong OTP. Login failed.");
                }
            } else {
                System.out.println("❌ User not found.");
            }
        } catch (SQLException ex) {
            System.out.println("An error occurred while checking user: " + ex.getMessage());
        }
    }

    private void signUp() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name:");
        String name = sc.nextLine().trim();

        System.out.println("Enter Email:");
        String email = sc.nextLine().trim();

        String genOTP = GenerateOTP.getOTP();
        SendOTPService.sendOTP(email, genOTP);
        System.out.println("An OTP has been sent to your email.");
        System.out.println("Enter the OTP:");
        String otp = sc.nextLine().trim();

        if (otp.equals(genOTP)) {
            User user = new User(name, email);
            int response = UserService.saveUser(user);
            switch (response) {
                case 0 -> System.out.println("✅ User registered successfully.");
                case 1 -> System.out.println("⚠️ User already exists.");
                case -1 -> System.out.println("❌ Something went wrong while saving user.");
            }
        } else {
            System.out.println("❌ Wrong OTP. Registration failed.");
        }
    }
}
