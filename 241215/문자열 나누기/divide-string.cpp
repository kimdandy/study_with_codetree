#include <iostream>
using namespace std;

/// Q. 공백과 숫자로만 이루어진 문자열과 그 문자열의 개수가 주어지면 다섯 개의 숫자씩 나누어서 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    int n; // 1 ≤ n ≤ 10
    cin >> n;

    string num[10]; // n_max=10
    string nums ="";
    for(int i=0; i<n;i++){
        cin >> num[i];
        nums += num[i];
    }
    for(int i=0;i<nums.length();i++){
        cout << nums[i];
        if((i+1)%5==0) cout << endl;
    }
    return 0;
}