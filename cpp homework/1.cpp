#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "请输入数字个数：";
    cin >> n;

    vector<double> nums(n);
    cout << "请输入 " << n << " 个数字：";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // 最大、最小、平均
    double max_num = *max_element(nums.begin(), nums.end());
    double min_num = *min_element(nums.begin(), nums.end());
    double sum = 0;
    for (auto num : nums) sum += num;
    double avg = sum / n;

    cout << "最大值：" << max_num << endl;
    cout << "最小值：" << min_num << endl;
    cout << "平均值：" << avg << endl;

    return 0;
}