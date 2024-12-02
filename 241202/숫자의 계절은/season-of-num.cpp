#include <iostream>
using namespace std;
/* if 조건 나열 순서의 중요성 */
// 범위가 넓은 것을 우선 배치

/* Q. 몇 월인지를 입력받아, 어떤 계절인지를 출력하는 프로그램을 작성해보세요.

3~5월이 봄, 6~8월이 여름, 9~11월이 가을, 12~2월이 겨울이라 가정합니다. */

int main() {
    int m;
    cin >> m;

    if (m<=2 or m==12) cout << "Winter";
    else if (m<=5) cout << "Spring";
    else if (m<=8) cout << "Summer";
    else if (m<=11) cout << "Fall";

    return 0;
}