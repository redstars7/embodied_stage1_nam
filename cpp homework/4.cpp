#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("test.txt");
    
    if (!file.is_open()) {
        cout << "文件打开失败！" << endl;
        return 1;
    }
    
    string word;
    int count = 0;
    
    while (file >> word) {
        count++;
    }
    
    cout << "文件中的单词总数：" << count << endl;
    
    file.close();
    return 0;
}