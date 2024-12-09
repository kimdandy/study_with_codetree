#include <iostream>
using namespace std;

/* Q. n 개의 정수가 주어집니다.

주어진 정수 중에서 짝수만 출력하는 프로그램을 작성해보세요. 
이때, 입력에서 주어진 순서의 역순으로 짝수만 출력해야 합니다.

예를 들어, n=6 개의 정수가 3, 1, 4, 5, 6, 2 순으로 주어졌다면, 2, 6, 4를 차례대로 출력해야 합니다.*/
int main() {
    int n, z; // 1<=n<=100, z:입력받는 정수 할당을 위한 변수
    cin >> n;
    int arr[100]; // arr: 입력받은 수중, 짝수 만을 저장할 배열, n의 최댓값 100, 1<=cnt(z)<=n
    int sz =0; // sz : arr의 크기
    for(int i=0;i<n; i++){
        cin >> z; // 1<=z<=100
        if(z%2==0) {
            arr[sz]=z;
            sz ++;
        }
    }
    for(int i=sz-1;i>=0;i--) cout << arr[i] << " "; // 배열은 0부터 시작
    return 0;
}