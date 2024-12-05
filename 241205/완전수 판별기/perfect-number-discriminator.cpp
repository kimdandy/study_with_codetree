#include <iostream>
using namespace std;

/* Q. 숫자 n이 주어졌을 때, n이 완전수인지 판단하는 프로그램을 작성해보세요. 
완전수란 자기 자신을 제외한 약수의 합이 자신이 되는 수를 나타냅니다. 
예를 들어 6의 경우 1 + 2 + 3 = 6 이기 때문에 완전수입니다.*/
int main() {
    int n, sum=0;
    cin >> n;

    for (int i=1; i<n; i++){//완전수 계산을 위해 주어진값 자신 제외
        if(n%i==0) sum+=i;//주어진 수의 약수의 합 구하기
    }
    if(n==sum) cout << "P";
    else cout << "N";
    return 0;
}