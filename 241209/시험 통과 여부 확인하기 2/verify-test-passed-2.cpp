#include <iostream>
using namespace std;

/* Q. 교실에는 10명보다 적은 학생들이 있습니다. 
각각의 학생들은 총 4가지의 시험을 보며 점수를 받습니다. 
이때, 한 학생에 대해 4가지 시험의 평균 점수가 60점 이상이라면 해당 학생은 통과입니다. 
주어지는 학생 순서대로 평균점수가 통과라면 pass를 통과하지 못했다면 fail을 출력한 뒤, 최종적으로 통과한 학생의 수를 출력하는 프로그램을 작성해보세요. 
*/
int main() {
    int n; // 1<=n<10
    cin >> n;
    int cnt =0;
    for(int j=1; j<=n;j++){
        int arr[4];
        int sum=0;
        for(int i=0;i<4;i++){
            cin >> arr[i]; // 0<=arr[i]<=100
            sum += arr[i];
        }
        if(sum/4>=60) {
            cout << "pass" << endl;
            cnt++;
        }
        else cout << "fail" << endl;
    }
    cout << cnt;
    return 0;
}