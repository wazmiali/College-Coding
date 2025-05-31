package views;

import dao.DataDAO;
import dao.DataDAO;
import model.Data;

import java.io.File;
import java.io.IOException;
import java.sql.SQLException;
import java.util.List;
import java.util.Scanner;

public class UserView {
    private String email;

    public UserView(String email) {  // 🛠️ Added `public` to constructor (should not be package-private unless intentional)
        this.email = email;
    }

    public void home() {
        Scanner sc = new Scanner(System.in);  // 🛠️ Move Scanner out of loop to avoid resource leaks

        while (true) {
            System.out.println("\nWelcome " + this.email);
            System.out.println("Press 1 to show hidden files");
            System.out.println("Press 2 to hide a new file");
            System.out.println("Press 3 to unhide a file");
            System.out.println("Press 0 to exit");

            int ch;
            try {
                ch = Integer.parseInt(sc.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Invalid input. Please enter a number.");
                continue;
            }

            switch (ch) {
                case 1 -> {
                    try {
                        List<Data> files = DataDAO.getAllFiles(this.email);
                        if (files.isEmpty()) {
                            System.out.println("No hidden files found.");
                        } else {
                            System.out.println("ID - File Name");
                            for (Data file : files) {
                                System.out.println(file.getId() + " - " + file.getFileName());
                            }
                        }
                    } catch (SQLException e) {
                        System.out.println("Error fetching files: " + e.getMessage());
                    }
                }
                case 2 -> {
                    System.out.println("Enter the file path:");
                    String path = sc.nextLine();
                    File f = new File(path);
                    if (!f.exists()) {
                        System.out.println("File does not exist.");
                        break;
                    }
                    Data file = new Data(0, f.getName(), path, this.email);
                    try {
                        DataDAO.hideFile(file);
                        System.out.println("File hidden successfully.");
                    } catch (SQLException | IOException e) {
                        System.out.println("Error hiding file: " + e.getMessage());
                    }
                }
                case 3 -> {
                    try {
                        List<Data> files = DataDAO.getAllFiles(this.email);
                        if (files.isEmpty()) {
                            System.out.println("No hidden files to unhide.");
                            break;
                        }

                        System.out.println("ID - File Name");
                        for (Data file : files) {
                            System.out.println(file.getId() + " - " + file.getFileName());
                        }

                        System.out.println("Enter the ID of the file to unhide:");
                        int id;
                        try {
                            id = Integer.parseInt(sc.nextLine());
                        } catch (NumberFormatException e) {
                            System.out.println("Invalid ID.");
                            break;
                        }

                        boolean isValidID = files.stream().anyMatch(file -> file.getId() == id);

                        if (isValidID) {
                            DataDAO.unhide(id);
                        } else {
                            System.out.println("Wrong ID.");
                        }
                    } catch (SQLException | IOException e) {
                        System.out.println("Error unhiding file: " + e.getMessage());
                    }
                }
                case 0 -> {
                    System.out.println("Exiting...");
                    return;
                }
                default -> System.out.println("Invalid option. Please choose 0–3.");
            }
        }
    }
}

