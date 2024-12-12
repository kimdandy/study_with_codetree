#include <iostream>
using namespace std;

/* Q. N개의 정수가 주어졌을 때, 주어진 정수들 중 최댓값의 위치를 출력합니다. 
만약 최댓값이 여러 개라면, 가장 왼쪽에 있는 최댓값의 위치를 출력합니다.

그 이후에는 위에서 구한 최댓값의 위치보다 더 왼쪽에 있는 정수들 중 최댓값을 구해 그 위치를 출력합니다. 
이 경우에도 최댓값이 여러 개라면, 가장 왼쪽에 있는 최댓값의 위치를 출력합니다.

위의 과정을 끊임없이 반복하며, 최종적으로 첫 번째 원소가 뽑히게 되면 이 과정을 종료합니다. 
이러한 과정을 거쳐 구해진 최댓값의 위치들을 출력하는 프로그램을 작성해보세요.*/
int main() {
    int n; // 1 ≤ N ≤ 1,000
    cin >> n;
    //cout << n << endl;
    int arr[1000]; // N_max=1000
    for(int i=0;i<n;i++) {
        cin >> arr[i]; // 1~1000
        //cout << arr[i] << " ";
    }
    //cout << endl;

    int max_pos=n; // 현루프의 가장  왼쪽 최대값의 위치 , 0~N-1
    int cur_sz=max_pos; // 이전 루프의 가장 왼쪽 최대값의 위치 ; max_pos 중복 사용을 방지하기위해 선언
    //cout << max_pos << endl;
    while(1){
        int max = 0;
        for(int i=0; i< cur_sz ; i++ ){
            if(max < arr[i]) {
                max = arr[i];
                max_pos = i;
                //cout << max_pos << endl; 
            }
            //cout << max << " " << max_pos << endl;
        }
        cout << max_pos+1 << " ";
        if(max_pos == 0) break;
        cur_sz = max_pos;
        }
    return 0;
}