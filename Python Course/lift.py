class Lift:
    def __init__(self, total_floors=9):
        self.current_floor = 1  # Assuming lift starts at the ground floor (floor 1)
        self.total_floors = total_floors

    def move_to_floor(self, requested_floor):
        if requested_floor < 1 or requested_floor > self.total_floors:
            print(f"Invalid floor! Please choose a floor between 1 and {self.total_floors}.")
            return

        if requested_floor == self.current_floor:
            print(f"Lift is already at floor {self.current_floor}.")
        else:
            print(f"Lift moving from floor {self.current_floor} to floor {requested_floor}.")
            self.current_floor = requested_floor
            print(f"Lift arrived at floor {self.current_floor}.")

    def call_lift(self):
        while True:
            try:
                requested_floor = int(input(f"Enter the floor number (1 to {self.total_floors}) you want to go to: "))
                self.move_to_floor(requested_floor)
                break
            except ValueError:
                print("Please enter a valid number.")

def main():
    lift = Lift()  # Initialize lift for a building with 9 floors
    while True:
        print(f"\nCurrent lift position: Floor {lift.current_floor}")
        lift.call_lift()
        
        # Option to continue or stop
        continue_choice = input("Do you want to move the lift again? (yes/no): ").strip().lower()
        if continue_choice != "yes":
            print("Thank you for using the lift.")
            break

if __name__ == "__main__":
    main()
