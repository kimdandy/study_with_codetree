#include <iostream>
using namespace std;
//// n번 반복하는 경우

/* Q. 정수 n과 n개의 a, b쌍이 주어집니다. 
a부터 b까지의 곱셈을 출력하는 프로그램을 작성해보세요.*/
int main() {
    int n,a,b; // 1<=n<=9 / 1<=a<=b<=100
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a >> b;
        int prod =1; // |prod| <= 2^31 -1
        for(int j=a; j<=b; j++) prod *= j;
        cout << prod << endl;
    }
    return 0;
}