import os

def display_menu():
    print("\nTo-Do List Menu:")
    print("1. Add Task")
    print("2. View Tasks")
    print("3. Mark Task as Completed")
    print("4. Delete Task")
    print("5. Exit")

def add_task(task, filename="todo.txt"):
    with open(filename, "a") as file:
        file.write(task + "\n")
    print("Task added successfully!")

def view_tasks(filename="todo.txt"):
    if os.path.exists(filename):
        with open(filename, "r") as file:
            tasks = file.readlines()
            if tasks:
                print("\nCurrent Tasks:")
                for i, task in enumerate(tasks, start=1):
                    print(f"{i}. {task.strip()}")
            else:
                print("No tasks found.")
    else:
        print("No tasks found.")

def mark_completed(task_index, filename="todo.txt", completed_filename="completed.txt"):
    if os.path.exists(filename):
        with open(filename, "r") as file:
            tasks = file.readlines()
            if tasks and 0 < task_index <= len(tasks):
                completed_task = tasks.pop(task_index - 1)
                with open(filename, "w") as new_file:
                    new_file.writelines(tasks)
                with open(completed_filename, "a") as completed_file:
                    completed_file.write(completed_task)
                print("Task marked as completed!")
            else:
                print("Invalid task index.")
    else:
        print("No tasks found.")

def delete_task(task_index, filename="todo.txt"):
    if os.path.exists(filename):
        with open(filename, "r") as file:
            tasks = file.readlines()
            if tasks and 0 < task_index <= len(tasks):
                deleted_task = tasks.pop(task_index - 1)
                with open(filename, "w") as new_file:
                    new_file.writelines(tasks)
                print(f"Task '{deleted_task.strip()}' deleted successfully!")
            else:
                print("Invalid task index.")
    else:
        print("No tasks found.")

while True:
    display_menu()
    choice = input("Enter your choice (1-5): ")

    if choice == "1":  
        task = input("Enter the task: ")
        add_task(task)

    elif choice == "2":  
        view_tasks()

    elif choice == "3":  
        view_tasks()
        task_index = int(input("Enter the index of the task to mark as completed: "))
        mark_completed(task_index)

    elif choice == "4":
        view_tasks()
        task_index = int(input("Enter the index of the task to delete: "))
        delete_task(task_index)

    elif choice == "5":  
        print("Exiting To-Do List. Goodbye!")
        break

    else:
        print("Invalid choice. Please enter a number between 1 and 5.")
