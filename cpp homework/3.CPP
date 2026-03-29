#include <iostream>
#include <vector>   // 向量容器
#include <algorithm> // 排序函数 sort
using namespace std;

int main() {
    vector<int> nums;
    
    nums.push_back(35);
    nums.push_back(12);
    nums.push_back(78);
    nums.push_back(4);
    nums.push_back(29);
    
    cout << "排序前：";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    
    sort(nums.begin(), nums.end());
    
    cout << "排序后：";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}