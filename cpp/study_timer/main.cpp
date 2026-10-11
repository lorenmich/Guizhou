#include <iostream>
#include "do.h"

int main()
{
    // 创建4个结构
    struct Subject c{}; c.subject_name = "C";
    struct Subject python{}; python.subject_name = "Python";
    struct Subject math{}; math.subject_name = "Math";
    struct Subject english{}; english.subject_name = "English";

    // 创建指针数组subjects，元素为指针，容量为4，分别存储4个结构体的地址，指针类型为struct subject
    struct Subject * subjects[4] = {&c, &python, &math, &english}; 

    int valid_records = 0; // 有效记录数
    int total_duration = 0;// 总学习时长

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
        // 在此添加学习记录
        if (choice == 1)
        {
            std::cout << "You selected option 1: add study record" << std::endl;

            // 选择科目
            int subject = input_subject();

            // 获取用户输入的学习分钟数
            int minutes = input_minutes();
            std::cout << "You entered: " << minutes << " minutes" << std::endl;

            // (*subjects[subject-1]) == c/... : 读取指针数组的对应指针并且解引用，也就直接表示结构体(c, pyhton, math, english)名称了
            ((*subjects[subject-1]).study_times)++;
            (*subjects[subject-1]).study_duration[((*subjects[subject-1]).study_times)-1] = minutes;
            (*subjects[subject-1]).total_duration += minutes;
            valid_records++;
            total_duration += minutes;
        }
        // 在此查看科目学习记录
        else if (choice == 2)
        {   // (*subjects[subject-1])
            std::cout << "You selected option 2: view study records" << std::endl;

            int subject = input_subject();

            std::cout << "Total study time for the subject " << (*subjects[subject-1]).subject_name << ": " << (*subjects[subject-1]).total_duration << " minutes" << std::endl;
            std::cout << "Total study time for all subjects: " << total_duration << "\n";
        }
        // 跳过循环剩余部分并再次提示输入
        else
        {
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
        }
    }

    do_record(subjects, sizeof(subjects) / sizeof(subjects[0]), total_duration, valid_records);

    return 0;
}
