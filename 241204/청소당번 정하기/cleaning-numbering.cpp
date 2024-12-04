#include <iostream>
using namespace std;

/* Q. 0일을 기점으로 2일마다 교실 청소를, 3일마다 복도 청소를, 12일마다 화장실 청소를 합니다. 
날짜가 겹치는 날에는 주기가 더 긴 것을 하기로 했습니다. n일간 진행했을 때 각 장소의 청소 횟수를 차례로 출력하는 프로그램을 작성해주세요. 
단, 시작 날인 0일에는 청소를 진행하지 않습니다.*/
int main() {
    int n, cnt_classroom=0, cnt_hall=0, cnt_toilet=0;
    cin >> n;

    for (int i=1; i<=n; i++){
        if(i%12==0) cnt_toilet += 1;
        else if(i%3==0) cnt_hall += 1;
        else if(i%2==0) cnt_classroom += 1 ;         
    }

    cout << cnt_classroom << " " << cnt_hall << " " << cnt_toilet;
    return 0;
}