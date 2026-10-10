#include <iostream>
#include <cstdio>

void print_menu();   // 主菜单
int input_subject(); // 输入科目
int input_minutes(); // 输入学习分钟数

int main()
{
    // 将所有元素初始化为 0
    int subject_time[4] = {0};
    while (true)
    {
        // 显示菜单并获取用户选择
        print_menu();
        int choice;
        std::cin >> choice;

        // 如果用户选择 0 则退出循环
        if (choice == 0)
        {
            std::cout << "Exiting..." << std::endl
                      << "*************************" << std::endl;
            break;
        }

        if (choice == 1)
        {
            std::cout << "You selected option 1: add study record" << std::endl;

            // 选择科目
            int subject = input_subject();

            // 获取用户输入的学习分钟数
            int minutes = input_minutes();
            std::cout << "You entered: " << minutes << " minutes" << std::endl;

            // 在此添加学习记录逻辑
            subject_time[subject - 1] = subject_time[subject - 1] + minutes;
        }
        else if (choice == 2)
        {
            std::cout << "You selected option 2: view study records" << std::endl;
            // 在此查看学习记录逻辑
            int subject = input_subject();
            std::cout << "Total study time for subject " << subject << ": " << subject_time[subject - 1] << " minutes" << std::endl;
        }
        else
        {
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
            // 跳过循环剩余部分并再次提示输入
        }
    }

    system("pause");
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
flag:
    std::cout << "Enter study time in minutes (1-240):";
    std::cin >> minutes;
    if (minutes < 1 || minutes > 240)
    {
        std::cout << "Invalid input. Please enter a value between 1 and 240." << std::endl;
        goto flag;
    }
    return minutes;
}

int input_subject()
{
    int subject;
    std::cout << "Select subject (1: C, 2: Python, 3: Math, 4: English): ";
    std::cin >> subject;
    return subject;
}
