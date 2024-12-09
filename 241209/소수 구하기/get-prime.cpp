#include <iostream>
using namespace std;

/// Q. 1이상 n이하의 소수를 오름차순으로 출력하는 프로그램을 작성해보세요.
// 각각 공백을 사이에 두고 출력
int main() {
    int n; // 1<=n<=100
    cin >> n;

    for(int i=1;i<=n;i++){
        int cnt =0 ;
        for(int j=1;j<=i;j++) if(i%j==0) cnt ++;
        if(cnt==2) cout << i << " ";
    }

    /*// 해설
    for(int i = 1; i <= n; i++) {
		if(i == 1) continue;
		bool isprime = true;
		
		for(int j = 2; j < i; j++)
			if(i % j == 0) isprime = false;
		
		if(isprime)
			cout << i << " ";
	}
    */
    return 0;
}