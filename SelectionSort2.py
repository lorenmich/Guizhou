import random

lst_o = [8, 3, 9, 10, 2, 1, 4, 6, 7, 5] #创建原始列表lst_o
lst_1 = random.sample(range(1, 160), 20)  # 随机生成一个列表

#复制一份原始列表存为副本lst
lst = lst_1.copy()

#列表长度
lenth = len(lst)
for t in range(lenth - 1, -1):  #缩短可读lst的长度
    index = 0
    for i in range(1, t + 1):
        if lst[index] < lst[i]:
            index = i

    lst[index], lst[t] = lst[t], lst[index]

print("原始列表:    ", lst_1)
print("排序后的列表:", lst)
