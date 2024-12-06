#include <iostream>
using namespace std;

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 3를 입력받는 경우

*
* * *
* *
* *
* * *
*
n에 4을 입력받는 경우

*
* * * *
* *
* * *
* * *
* *
* * * *
* 

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for (int i=1; i<=2*n; i++){
        if(i%2==1){
            for(int j=1; j<=(i+1)/2; j++) cout << "* ";
        }
        else{
            for(int j=n+1-i/2; j>=1; j--) cout << "* ";
        }
        cout << endl;
    }
    return 0;
}