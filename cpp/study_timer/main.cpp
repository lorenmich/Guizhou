#include <iostream>
#include <cstdio>

void print_menu();   // 主菜单
int input_subject(); // 输入科目
int input_minutes(); // 输入学习分钟数
int input_choice();  // 输入选择

int main()
{
    int subject_time[4] = {0}; // 将所有元素初始化为 0
    int valid_records = 0; // 有效记录数
    while (true)
    {
        // 显示菜单并获取用户选择
        print_menu();
        int choice = input_choice();

        // 如果用户选择 0 则退出循环
        if (choice == 0)
        {
            std::cout << "Exiting..." << std::endl
                      << "*************************" << std::endl;
            break;
        }

        if (choice == 1)
        {   // 在此添加学习记录
            std::cout << "You selected option 1: add study record" << std::endl;

            // 选择科目
            int subject = input_subject();

            // 获取用户输入的学习分钟数
            int minutes = input_minutes();
            std::cout << "You entered: " << minutes << " minutes" << std::endl;

            subject_time[subject - 1] += minutes;
            valid_records++;
        }
        else if (choice == 2)
        {   // 在此查看学习记录
            std::cout << "You selected option 2: view study records" << std::endl;
            int subject = input_subject(); int total_time = 0;
            std::cout << "Total study time for subject " << subject << ": " << subject_time[subject - 1] << " minutes" << std::endl;
            for (int i = 0; i < sizeof(subject_time) / sizeof(subject_time[0]); ++i)
            {
                total_time += subject_time[i];
            }
            std::cout << "Total study time for all subjects: " << total_time << " minutes" << std::endl;
            std::cout << "Total valid records: " << valid_records << std::endl;
        }
        else
        {
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
            // 跳过循环剩余部分并再次提示输入
        }
    }

    return 0;
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
