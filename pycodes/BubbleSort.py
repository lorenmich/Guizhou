import random

lst_o = [8, 3, 9, 10, 2, 1, 4, 6, 7, 5] #创建原始列表lst_o
lst_1 = random.sample(range(1, 160), 20)  # 随机生成一个包含100个整数的列表

#复制一份原始列表存为副本lst
lst = lst_1.copy()

#列表长度
lenth = len(lst)
for j in range(lenth):    
    for i in range(lenth - 1):
        if lst[i] > lst[i+1]:
            lst[i], lst[i+1] = lst[i+1], lst[i]
for i in range(lenth - 1):
    if lst[i] > lst[i+1]:
        print(f"wrong! at index {i} : {lst[i]} > {lst[i+1]}")

print("原始列表:    ", lst_1)
print("排序后的列表:", lst)