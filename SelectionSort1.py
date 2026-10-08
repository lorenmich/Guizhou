import random

lst_o = [8, 3, 9, 10, 2, 1, 4, 6, 7, 5] #创建原始列表lst_o
lst_1 = random.sample(range(1, 160), 20)  # 随机生成一个列表

#复制一份原始列表存为副本lst
lst = lst_1.copy()

#列表长度
lenth = len(lst)
for t in range(lenth - 1, -1, -1):  #缩短可读lst的长度
    for i in range(t):
        if lst[i] > lst[i+1]:
            for j in range(i+1, t+1):
                if lst[i] < lst[j]:
                    break
                elif j == t:
                    lst[i], lst[j] = lst[j], lst[i]

print("原始列表:    ", lst_1)
print("排序后的列表:", lst)
