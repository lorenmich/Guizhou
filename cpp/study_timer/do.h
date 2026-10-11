#ifndef DO_H
#define DO_H
#include <string>

// 定义一个Subject结构体
struct Subject
{
    std::string subject_name;   // 学科名称
    int study_times;            // 学习次数
    int study_duration[50];     // 每次学习时长
    int total_duration;         // 总学习时长
};

void print_menu();   // 打印主菜单
int input_subject(); // 输入科目编号
int input_minutes(); // 输入学习分钟数
int input_choice();  // 输入选择编号
void reset_input();  // 重置输入
void do_record(struct Subject * ptr[4], int n, int t1, int t2);    //记录保存的数据

#endif