#include <iostream>
#include "do.h"

int input_minutes()
{
    int minutes;
    while (true)
    {
        std::cout << "Enter study time in minutes (1-240):";
        std::cin >> minutes;
        if (minutes >= 1 && minutes <= 240)
        {
            break; // 输入有效，退出循环
        }
    std::cout << "Invalid input. Please enter a value between 1 and 240." << std::endl;
    // 如果输入无效，提示用户重新输入
    }
    return minutes;
}

int input_subject()
{   
    int subject;
    while (true){
        std::cout << "Select subject (1: C, 2: Python, 3: Math, 4: English): ";
        std::cin >> subject;
        if (subject >= 1 && subject <= 4)
        {
            break; // 输入有效，退出循环
        }
        std::cout << "Invalid input. Please enter a value between 1 and 4." << std::endl;
    } 
    return subject;
}

int input_choice()
{
        int choice;
        std::cin >> choice;
        return choice;
}