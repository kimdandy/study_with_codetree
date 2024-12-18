#include <iostream>
using namespace std;

/// Q. 문자열 A를 우측으로 한 칸씩 n번 밀었을 때, 문자열 A 와 문자열 B가 같아지는 순간의 n 중 가능한 최솟값을 구하는 프로그램을 작성해보세요. (n > 0)
#include <string>
int main() {
    string a, b; // len_a = len_b, a != b , 2 ≤ 문자열의 길이 ≤ 100
    cin >> a >> b;

    int n=0;
    while(1){
        char lst = a[a.length()-1];
        for(int i=a.length()-1;i>0;i--) a[i] = a[i-1];
        a[0] = lst;

        n++;

        if(a==b) break;
        else if(n==a.length()){
            n=-1;
            break;
        }
    }
    cout << n;
    return 0;
}