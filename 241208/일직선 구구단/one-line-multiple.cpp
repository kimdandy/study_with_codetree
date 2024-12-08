#include <iostream>
using namespace std;
//// 둘둘단을 한 줄에 하나씩 출력

/* Q. 정수 n의 값이 주어지면 일직선으로 구구단을 출력하는 프로그램을 작성해보세요. 
n * n개의 줄에 걸쳐 출력합니다.*/
int main() {
    int n; // 1<= n,+9
    cin >> n;

    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout << i << " * " << j << " = " << i*j << endl;
    }
    return 0;
}