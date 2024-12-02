#include <iostream>
using namespace std;

/* Q.  
중간고사를 90점 이상 받은 자들로 한해서, 기말고사 점수에 따라 장학금을 지급하기로 했습니다. 
기말고사 점수가 100점 만점에 95점 이상은 10만 원, 90점 이상은 5만 원, 그 미만 점수는 받지 못합니다. 
중간, 기말고사 점수를 입력했을 때 받을 수 있는 장학금을 출력하는 프로그램을 작성해주세요. */
int main() {
    int mid, fin;
    cin >> mid >> fin;

    if (mid < 90) cout << 0;
    else if (fin >= 95 ) cout << 100000;
    else if (fin >= 90) cout << 50000;
    else cout << 0;

    return 0;
}