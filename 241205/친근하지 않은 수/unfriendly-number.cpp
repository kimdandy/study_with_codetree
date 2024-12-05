#include <iostream>
using namespace std;
///* 반복문에서의 continue *///
/* 반복문 안에 continue라는 keyword를 사용해 해결해 볼 수 있습니다. 
continue는 for, while 안에서만 사용이 가능합니다.*/
// continue는 if 와 같이 쓰이며, 해당 조건이 만족하는 경우에는 아래 코드를 더 이상 실행하지 않고 다시 위로 올라가 그 다음 for loop을 실행하게 됨
/*
for (int i = a; i < b; i++) {

    코드1

    if (조건) {
        코드2  
        continue; // 조건 성립시, 코드3 실행하지 않고 루프 처음으로 돌아감
    }
        
    코드3 // 조건 성립 하지 않을시 실행
}
*//*
코드가 복잡해질수록 출력 결과만 가지고는 의도한대로 코드가 동작하고 있는 것인지를 파악하기가 어렵습니다. 
따라서 cout을 강제로 주입하여 각각의 순간에 각 변수에 원하는 값이 적절하게 들어있는지를 확인해보는 것이 중요합니다.

int prod = 1;

	for (int i = a; i <= b; i++) {
		cout << "current val is " << i << endl;
		if (i % 2 == 0) {
			cout << "val is even" << endl;
			continue;
		}
		cout << "val is odd" << endl;
		prod *= i;
	}
*/

/* Q. 1이상 n이하의 정수 중 친근하지 않은 수의 개수를 출력하는 프로그램을 작성해보세요. 
친근한 수란 2, 3 또는 5로 나누어 떨어지는 수를 의미합니다. */
int main() {
    int n; // 1<=n<=1000
    cin >> n;

    int cnt=0;
    for (int i=1;i<=n;i++){
        if(i%2==0 || i%3==0 || i%5==0) continue;
        cnt +=1;
    }
    cout << cnt;

    return 0;
}