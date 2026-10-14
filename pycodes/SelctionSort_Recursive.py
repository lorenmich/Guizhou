import random

lst_o = [8, 3, 9, 10, 2, 1, 4, 6, 7, 5] #创建原始列表lst_o
lst_1 = random.sample(range(1, 160), 20)  # 随机生成一个列表

#复制一份原始列表存为副本lst
lst = lst_1.copy()

#列表长度
lenth = len(lst)

def arr(ls):
    if len(ls) <=1:
        return ls
    index = 0
    for i in range(len(ls)):
        if ls[i] > ls[index]:
            index = i
    MAX = ls[index]
    del ls[index]
    return arr(ls) + [MAX]


print("原始列表:    ", lst_1)
print("排序后的列表:", arr(lst))
