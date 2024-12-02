#include <iostream>
using namespace std;


// Q. 정수 a가 3의 배수라면 YES를, 아니라면 NO를 출력하고, 또 5의 배수라면 YES를, 아니라면 NO 출력하는 프로그램을 작성해보세요.
int main() {
    int a;
    cin >> a;

    if (a%3==0) cout << "YES";
    else cout << "NO";

    if (a%5==0) cout << endl << "YES";
    else cout << endl << "NO";
    return 0;
}