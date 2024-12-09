#include <iostream>
using namespace std;
//// n개의 수 입력받기
// 배열에 값들을 저장하고 싶다면, n보다 크거나 같은 크기의 배열이 필요
/* int 변수 n 에 대해 다음과 같은 선언은 할 수 없음

int n = 4;
double arr[n]; (X)

이는 선언된 n 이 고정된 상수가 아니라 변할 수 있는 변수이기 때문
가능한 n 의 최대 크기를 확인한 다음, 모두 담을만한 충분한 크기의 배열을 선언해주어야 함
*/

/* Q. 과목 수 n이 주어집니다. 
n개 과목의 학점을 입력받아서 평균학점을 구하여 출력하고, 평균이 4.0 이상이면 Perfect, 3.0 이상이면 Good, 3.0 미만이면 Poor를 출력하는 프로그램을 작성해보세요.
평균학점을 반올림하여 소수 첫째 자리까지 출력합니다.*/
int main() {
    int n; // 1<=n<=5
    double arr[5]; // n의 최대 크기인 5 할당
    cin >> n;
    double sum=0;
    for(int i=0; i<n; i++) {
        cin >> arr[i]; // 0<=arr[i]<=4.5
        sum+=arr[i];
    } double mean = sum/n;

    cout << fixed;
    cout.precision(1);
    cout << mean << endl;
    if(mean>=4.0) cout << "Perfect";
    else if(mean >=3.0) cout << "Good";
    else cout << "Poor";
    
    return 0;
}