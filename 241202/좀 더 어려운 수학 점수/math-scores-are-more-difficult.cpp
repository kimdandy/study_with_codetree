#include <iostream>
using namespace std;

/* Q. 이번 중간고사에는 영어보다 수학이 특별히 더 어려웠습니다. 
학생 A와 B가 서로의 점수를 가지고 우선순위를 나누려고 합니다. 
영어 점수와 상관없이 수학 점수가 높다면 더 높은 학생의 이름을 출력하고, 만약 수학 점수가 같다면 영어 점수가 더 높은 학생의 이름을 출력하려고 합니다. 
두 학생의 수학 점수와 영어 점수가 주어질 때, 위의 조건을 만족하는 학생의 이름을 출력하는 프로그램을 작성해보세요. 
(단, 수학 점수와 영어 점수가 둘 다 동일하게 주어지는 경우는 없다고 생각해도 좋습니다.)*/
int main() {
    int A_mat, A_eng, B_mat, B_eng;
    cin >> A_mat >> A_eng >> B_mat >> B_eng;

    if (A_mat > B_mat or A_mat == B_mat and A_eng > B_eng ) cout << "A";
    else if( A_mat < B_mat or A_mat == B_mat and A_eng < B_eng ) cout << "B";
    
    return 0;
}