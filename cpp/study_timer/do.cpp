#include <iostream>
#include "do.h"

int input_minutes()
{
    int minutes;
    while (true)
    {
        std::cout << "Enter study time in minutes (1-240):";
        if (std::cin >> minutes)
        {
            reset_input(); // 清除输入缓冲区中的多余字符
            if (minutes >= 1 && minutes <= 240)
            {
                break; // 输入有效，退出循环
            }
            else
            {
            std::cout << "Invalid input. Please enter a value between 1 and 240." << std::endl;
            // 如果输入无效，提示用户重新输入
            }
        }
        else
        {
            std::cout << "WRONG input type! Please enter an integer value." << std::endl;
            reset_input(); // 清除输入缓冲区中的错误输入
            continue; // 跳过循环剩余部分并再次提示输入
        }
    }
    return minutes;
}

int input_subject()
{   
    int subject;
    while (true){
        std::cout << "Select subject (1: C, 2: Python, 3: Math, 4: English): ";
        if (std::cin >> subject)
        {   
            reset_input(); // 清除输入缓冲区中的多余字符
            if (subject >= 1 && subject <= 4)
            {
                break; // 输入有效，退出循环
            }
            else
            {
                std::cout << "Invalid input. Please enter a value between 1 and 4." << std::endl;
            }
        }
        else
        {
            std::cout << "WRONG input type! Please enter an integer value." << std::endl;
            reset_input(); // 清除输入缓冲区中的错误输入
            continue; // 跳过循环剩余部分并再次提示输入
        }
    }
    return subject;
}

int input_choice()
{
    int choice;
    while (true)
    {
        if (std::cin >> choice)
        {
            reset_input(); // 清除输入缓冲区中的多余字符
            if (choice >= 0 && choice <= 2)
            {
                break; // 输入有效，退出循环
            }
            std::cout << "Invalid input. Please enter a value between 0 and 2." << std::endl;
        }
        else
        {
            std::cout << "WRONG input type! Please enter an integer value." << std::endl;
            continue; // 跳过循环剩余部分并再次提示输入
        }
    }
    return choice;
}

void reset_input()
{
    std::cin.clear(); // 清除错误标志
    std::cin.ignore(1000, '\n'); // 忽略输入缓冲区中的多余字符
}
