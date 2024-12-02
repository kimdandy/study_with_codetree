#include <iostream>
using namespace std;
// and 
/* 2개 이상의 조건을 동시에 만족하는지를 알고싶은 경우라면, 다음과 같이 && (and) 를 사용

if (조건1 && 조건2) {

    코드1

}

*/

/* 3개의 조건을 모두 만족시키는지에 대한 여부 역시 and를 2번 사용하여 표현할 수 있습니다. 
조건이 더 많아도 됩니다.

if (조건1 && 조건2 && 조건3) {

    코드1

}

*/
// Q. A와 B의 수학과 영어의 점수를 입력받아 누가 더 높은지 비교하는 프로그램을 작성해주세요.
int main() {
    int A_mat, A_eng, B_mat, B_eng;
    cin >> A_mat >> A_eng >> B_mat >> B_eng;

    if (A_mat >B_mat && A_eng > B_eng) cout << 1;
    else cout << 0;
    
    return 0;
}