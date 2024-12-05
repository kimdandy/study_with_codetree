#include <iostream>
using namespace std;

/* Q. 두 정수 a, b를 입력받고, a이상 b이하 수 중 다음 조건에 맞는 수들의 합을 구하는 프로그램을 작성해보세요.

-6의 배수이면서, 8의 배수가 아닌 수*/ 
int main() {
    int a,b ; // 1<=a<=b<=100
    cin >> a >> b;
    
    int sum=0;
    for (int i=a;i<=b;i++){
        if(i%6==0 && i%8 != 0) sum+=i;
    }
    cout << sum;

    return 0;
}