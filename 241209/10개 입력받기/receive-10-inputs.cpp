#include <iostream>
using namespace std;

/* Q. 정수 10개를 입력받아서 그 합과 평균을 출력하는데, 0이 입력되면 10개 입력이 끝나지 않았더라도 그때까지 입력된 합과 평균을 출력하는 프로그램을 작성해보세요. 
0이 입력된 경우 0을 제외한 합과 평균을 구합니다. 
단, 처음에 0은 입력받지 않는다고 생각해도 좋습니다.
첫 번째 줄에 합과 평균은 사이에 공백을 두고 출력합니다. 
평균은 소수 첫째 자리까지 출력합니다.*/
int main() {
    int arr[10];
    int sum = 0, cnt=0; // cnt: 0이 입력되기까지 직전의 입력횟수
    for(int i=0;i<10;i++) {
        cin >> arr[i]; // 0<=arr[i]<=100
        if(arr[i] == 0) break;
        sum+=arr[i];
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum)/cnt;
    

    return 0;
}