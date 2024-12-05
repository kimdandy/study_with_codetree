#include <iostream>
using namespace std;

/* Q. A반의 출석번호 1번은 John, 2번은 Tom, 3번은 Paul, 4번은 Sam입니다. 
번호를 입력하면 해당하는 학생의 이름을 출력하는 작업을 반복하다가 해당하는 번호 이외의 숫자가 입력되면 Vacancy를 출력하고 종료하는 프로그램을 작성해보세요.*/
int main() {
    int n; // n : 입력받을 출석번호들을 할당할 변수 , 1<=n<=100
    for(;;){
        cin >> n;
        if(n==1) cout << "John";
        else if(n==2) cout << "Tom";
        else if(n==3) cout << "Paul";
        else if(n==4) cout << "Sam";
        else {
            cout << "Vacancy";
            break;
        }
        cout << endl;
    }
    return 0;
}