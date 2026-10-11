#include <iostream>
#include <fstream>
#include <string>
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
            reset_input(); // 清除输入缓冲区中的多余字符
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

void print_menu()
{
    std::cout << "*************************" << std::endl;
    std::cout << "Study Timer System Menu" << std::endl;
    std::cout << "1. add study record" << std::endl;
    std::cout << "2. view study records" << std::endl;
    std::cout << "0. Exit" << std::endl
              << std::endl;
    std::cout << "Enter your choice: ";
}

void do_record(struct Subject * ptr[4], int n, int t1, int t2)
{
    std::ofstream t("Recording.txt");
    // 打开或创建文件Recording.txt
    if(t.is_open())
    {
        for (int i=0; i < n; i++)
        {
            t << "学科名称：" << (*ptr[i]).subject_name << "\n"
            << "学习次数：" <<(*ptr[i]).study_times << "\n"
            << "学习总时长：" << (*ptr[i]).total_duration << "\n" << "每次学习时长：";
            for(int k=0; k < 50;  k++)
            {
                if ((*ptr[i]).study_duration[k] == 0)
                {break;}
                t << "第"<< k+1 << "次：" << (*ptr[i]).study_duration[k] << "\t";
            }
            t << "\n" << std::endl;
        }
        t << std::endl;
        t << "总学习时长：" << t1 << "minutes\n总学习次数：" << t2 << "次" << std::endl;
        t.close();
    }
    else
    {
        std::cout << "ERROR: Opening File Failed!\n";
    }
}
