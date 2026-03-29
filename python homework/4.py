# 列表去重并排序
def clean_list(lst):
    unique_lst = list(set(lst))
    unique_lst.sort()
    return unique_lst

if __name__ == "__main__":
    test = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
    print("原始列表：", test)
    print("去重+排序后：", clean_list(test))