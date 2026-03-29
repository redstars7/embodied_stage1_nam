#读取txt文件，统计有多少行、多少个单词
file_path = input("请输入文件路径：")

with open(file_path, 'r', encoding='utf-8') as f:
    lines = f.readlines()

line_num = len(lines)
word_num = 0

for line in lines:
    words = line.strip().split()
    word_num += len(words)

print("总行数：", line_num)
print("总单词数：", word_num)