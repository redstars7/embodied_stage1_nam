# 统计字符串里每个字符出现多少次
s = input("请输入一段文字：")

count = {}
for char in s:
    if char in count:
        count[char] += 1
    else:
        count[char] = 1

print("每个字符出现次数：")
for k, v in count.items():
    print(f"{k} : {v} 次")