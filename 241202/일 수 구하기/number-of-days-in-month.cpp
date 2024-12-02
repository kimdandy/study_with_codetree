#include <iostream>
using namespace std;

/* Q. 윤년이 아닌 해에 n월에는 몇 일이 있는지를 출력하는 프로그램을 작성하세요. 
윤년이 아닌 해의 2월은 28일까지 있습니다.*/
int main() {
    int n;
    cin >> n;

    if (n>=1 and n<=12){
        if(n==2) cout << 28;
        else{
            if(n<=7 && n%2==0 || n>=8 && n%2!=0) cout << 30;
                else cout << 31;
            }
        }
    return 0;
}