#include <iostream>
using namespace std;
/* 중첩 조건문 */
/*  if else 조건문 안에 또 다른 조건을 추가하여 작성해볼 수 있습니다. 
이 경우에도 안에 있는 조건문 작성시 내부 코드는 중괄호{ } 로 내부 범위를 꼭 지정해주어야 합니다. 

들여쓰기(indent)를 이용하여, 내부 if문 블록이 바깥 if문 블록 안에 있음을 나타낼 수 있습니다. 
들여쓰기는 보통 공백 4칸(tab)으로 합니다.
*/

/* Q. 성별에 대해 남자는 숫자 0, 여자는 숫자 1로 나타내기로 하고, 19세 이상을 성인이라고 합시다.

성별(숫자 0 또는 1)과 나이를 입력받아 MAN(성인남자), WOMAN(성인여자), BOY(미성년남자), GIRL(미성년여자)을 구분하여 출력하는 프로그램을 작성해주세요.*/
int main() {
    int gen, age;
    cin >> gen;
    cin >> age;

    if( gen == 0){
        if (age>=19) cout << "MAN";
        else cout << "BOY";
    }
    else{
        if (age>=19) cout << "WOMAN";
        else cout << "GIRL";
    }
    return 0;
}