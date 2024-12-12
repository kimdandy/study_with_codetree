#include <iostream>
using namespace std;

/// Q. 10개의 정수를 입력받아 500 미만의 수 중 가장 큰 수와 500 초과의 수 중 가장 작은 수를 출력하는 프로그램을 작성해보세요.
int main() {
    int und[10], ove[10]; // 각각 최대크기 10
    int under_cnt=0, over_cnt=0; // 500미만의 수를 저장할 배열의 크기 와 500초과의 수를 저장할 배열의 크기
    int n; // 입력받은 정수 할당용 변수
    for(int i=0;i<10;i++){
        cin >> n; // 1~100
        if(n>500){
            ove[over_cnt]=n;
            over_cnt++;
        }
        else if(n<500){
            und[under_cnt] = n;
            under_cnt++;
        }
    }

    int max=0;  // n
    for(int i=0;i<under_cnt;i++)
        if(max<und[i])    max=und[i];

    int min=1000; // n_max=1000
    for(int i=0;i<over_cnt;i++)
        if(min>ove[i])  min = ove[i];
    
    cout << max << " " << min;

    return 0;
}