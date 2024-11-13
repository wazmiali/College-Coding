import curses

class ContactBook:
    def __init__(self):
        self.contacts = []

    def add_contact(self, name, phone, email, address):
        contact = {"Name": name, "Phone": phone, "Email": email, "Address": address}
        self.contacts.append(contact)

    def view_contacts(self):
        return self.contacts

    def search_contact(self, keyword):
        results = []
        for contact in self.contacts:
            if keyword.lower() in contact["Name"].lower() or keyword in contact["Phone"]:
                results.append(contact)
        return results

    def update_contact(self, old_name, new_name, new_phone, new_email, new_address):
        for contact in self.contacts:
            if contact["Name"] == old_name:
                contact["Name"] = new_name
                contact["Phone"] = new_phone
                contact["Email"] = new_email
                contact["Address"] = new_address
                break

    def delete_contact(self, name):
        self.contacts = [contact for contact in self.contacts if contact["Name"] != name]

contact_book = ContactBook()

def print_menu(stdscr):
    stdscr.clear()
    stdscr.addstr(0, 0, "1. Add Contact")
    stdscr.addstr(1, 0, "2. View Contact List")
    stdscr.addstr(2, 0, "3. Search Contact")
    stdscr.addstr(3, 0, "4. Update Contact")
    stdscr.addstr(4, 0, "5. Delete Contact")
    stdscr.addstr(5, 0, "6. Exit")
    stdscr.refresh()

def get_input(stdscr, prompt):
    stdscr.clear()
    stdscr.addstr(0, 0, prompt)
    stdscr.refresh()
    return stdscr.getstr(1, 0).decode("utf-8")

def main(stdscr):
    while True:
        print_menu(stdscr)
        choice = get_input(stdscr, "Enter your choice (1-6): ")

        if choice == "1":  
            name = get_input(stdscr, "Enter name: ")
            phone = get_input(stdscr, "Enter phone number: ")
            email = get_input(stdscr, "Enter email: ")
            address = get_input(stdscr, "Enter address: ")
            contact_book.add_contact(name, phone, email, address)

        elif choice == "2":  
            stdscr.clear()
            contacts = contact_book.view_contacts()
            for i, contact in enumerate(contacts, start=1):
                stdscr.addstr(i, 0, f"{contact['Name']}: {contact['Phone']}")
            stdscr.addstr(len(contacts) + 1, 0, "Press any key to continue...")
            stdscr.refresh()
            stdscr.getch()

        elif choice == "3":  
            keyword = get_input(stdscr, "Enter name or phone number to search: ")
            results = contact_book.search_contact(keyword)
            stdscr.clear()
            for i, contact in enumerate(results, start=1):
                stdscr.addstr(i, 0, f"{contact['Name']}: {contact['Phone']}")
            stdscr.addstr(len(results) + 1, 0, "Press any key to continue...")
            stdscr.refresh()
            stdscr.getch()

        elif choice == "4":  
            old_name = get_input(stdscr, "Enter the name of the contact to update: ")
            new_name = get_input(stdscr, "Enter new name: ")
            new_phone = get_input(stdscr, "Enter new phone number: ")
            new_email = get_input(stdscr, "Enter new email: ")
            new_address = get_input(stdscr, "Enter new address: ")
            contact_book.update_contact(old_name, new_name, new_phone, new_email, new_address)

        elif choice == "5":  
            name = get_input(stdscr, "Enter the name of the contact to delete: ")
            contact_book.delete_contact(name)

        elif choice == "6":
            break

if __name__ == "__main__":
    curses.wrapper(main)
