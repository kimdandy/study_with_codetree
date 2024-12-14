#include <iostream>
using namespace std;

/// Q. 3개의 문자열이 주어졌을 때, 가장 긴 문자열과 가장 짧은 문자열의 길이 차가 얼마인지 구해보는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int len1 =str1.length(), len2=str2.length(), len3 = str3.length();

    int arr[3] = {len1, len2 , len3};
    int len_max=0, len_min=20; // str_len_max=20
    for(int i=0;i<3;i++){
        if(len_max < arr[i]) len_max = arr[i];
        if(len_min > arr[i]) len_min = arr[i]; 
    }
    cout << len_max - len_min;
    return 0;
}