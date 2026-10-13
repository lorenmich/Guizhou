import random

def swap(arr, i, j):         # 把j位与i位互换
    arr[i], arr[j] = arr[j], arr[i]

lst_o = [8, 3, 9, 10, 2, 1, 4, 6, 7, 5] #创建原始列表lst_o
lst_1 = random.sample(range(1, 160), 20)  # 随机生成一个包含100个整数的列表

#复制一份原始列表存为副本lst
lst = lst_1.copy()

#列表长度
lenth = len(lst)

for i in range(1, lenth):
    for j in range(i, 0, -1):
        if lst[j] < lst[j-1]:
            swap(lst, j, j-1)
        else:
            break

print("原始列表:    ", lst_1)
print("排序后的列表:", lst)