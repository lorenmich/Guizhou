#include <iostream>
#include <cstdio>

void print_menu(); // main menu
int input_subject(); // input subject
int input_minutes(); // input study minutes

int main() {
    // Initialize all elements to 0
    int subject_time[4] = {0};
    while (true) {
        // Display the menu and get user choice
        print_menu();
        int choice;
        std::cin >> choice;

        // Exit the loop if the user selects 0
        if (choice == 0){
            std::cout << "Exiting..." << std::endl << "*************************" << std::endl; break;
        }
        
        if (choice == 1) {
            std::cout << "You selected option 1: add study record" << std::endl;
            
            // Select subject
            int subject = input_subject();
            
            // get study time in minutes from user
            int minutes = input_minutes();
            std::cout << "You entered: " << minutes << " minutes" << std::endl;
            
            // Add study record logic here
            subject_time[subject - 1] = subject_time[subject - 1] + minutes;
        }
        else if (choice == 2) {
            std::cout << "You selected option 2: view study records" << std::endl;
            // View study records logic here
            int subject = input_subject();
            std::cout << "Total study time for subject " << subject << ": " << subject_time[subject - 1] << " minutes" << std::endl;
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
            // Skip the rest of the loop and prompt for input again
        }

    }


    system("pause");
    return 0;
}

void print_menu() {
    std::cout << "*************************" <<std::endl;
    std::cout << "Study Timer System Menu" << std::endl;
    std::cout << "1. add study record" << std::endl;
    std::cout << "2. view study records" << std::endl;
    std::cout << "0. Exit" << std::endl << std::endl;
    std::cout << "Enter your choice: ";
}

int input_minutes() {
    int minutes;
    flag:
    std::cout << "Enter study time in minutes (1-240):";
    std::cin >> minutes;
    if (minutes < 1 || minutes > 240) {
        std::cout << "Invalid input. Please enter a value between 1 and 240." << std::endl;
        goto flag;
    }
    return minutes;
}

int input_subject() {
    int subject;
    std::cout << "Select subject (1: C, 2: Python, 3: Math, 4: English): ";
    std::cin >> subject;
    return subject;
}
