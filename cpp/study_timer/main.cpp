#include <iostream>
#include <cstdio>

void print_menu(); // main menu
int input_minutes(); // input study minutes

int main() {
    while (true) {
    
    // Display the menu and get user choice
    print_menu();
    int choice;
    std::cin >> choice;
    std::cout << "You selected option: " << choice << std::endl;

    // Exit the loop if the user selects 0
    if (choice == 0){
        std::cout << "Exiting..." << std::endl << "*************************" << std::endl; break;
    }

    if (choice == 1) {
        std::cout << "You selected option 1: add study record" << std::endl;
    } else if (choice == 2) {
        std::cout << "You selected option 2: view study records" << std::endl;
    } else {
        std::cout << "Invalid choice. Please try again." << std::endl;
        continue; // Skip the rest of the loop and prompt for input again
    }

    // get study time in minutes from user
    int minutes = input_minutes();
    std::cout << "You entered: " << minutes << " minutes" << std::endl;

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
    std::cout << "Enter study time in minutes: ";
    std::cin >> minutes;
    return minutes;
}