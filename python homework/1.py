# 输入多个数字，求最大值、最小值、平均值
nums = list(map(float, input("请输入数字，用空格分开：").split()))

max_num = max(nums)
min_num = min(nums)
avg_num = sum(nums) / len(nums)

print("最大值：", max_num)
print("最小值：", min_num)
print("平均值：", avg_num)