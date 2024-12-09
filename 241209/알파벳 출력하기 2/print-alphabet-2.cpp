#include <iostream>
using namespace std;

/* Q. 정수 N이 주어지면, 아래 예를 참고하여 규칙에 맞게 영문자를 출력하는 프로그램을 작성해보세요. Z 다음에는 A가 나와야 합니다(입출력 예제2 참고).

예)

N=2 인 경우:
A B
  C

N=3 인 경우:
A B C
  D E
    F
*/
int main() {
    int n; // 1<=n<=15
    cin >> n;

    int a = (int)'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++) cout << "  ";
        for(int j=n-i+1;j>=1;j--){ 
            cout << (char)a << " ";
            if(a==(int)'Z') a=(int)'A';
            else a++; 
        }
        cout << endl;
    }
    return 0;
}