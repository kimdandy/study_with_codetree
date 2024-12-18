#include <iostream>
using namespace std;
//// 정수를 문자열로 변환하기
// string헤더의 to_string 함수를 이용
/*
	int a = 123;
	string a_str;

	a_str = to_string(a);

	cout << a_str;

>> 123
*/


/// Q. 두 정수가 주어지면 그 두 수의 합을 더한 뒤의 결과에 숫자 1이 몇 번 나오는지 출력하는 프로그램을 작성해보세요.
#include <string>

int main() {
    int n1, n2; // 1 ≤ 두 정수 ≤ 1,000
    cin >> n1 >> n2;

    int nn = n1 + n2;
    string cn = to_string(nn);

    int cnt =0;
    for(int i=0;i<cn.length();i++)
        if(cn[i]=='1') cnt++;
    cout << cnt;
    return 0;
}