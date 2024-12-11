#include <iostream>
using namespace std;

/* Q. n 개의 원소와 q 개의 질의가 주어집니다.

하나의 질의는 다음 세 종류 중 하나입니다:

# "1 a"
    # a번째 원소를 출력합니다.

# "2 b"
    # n 개의 원소 중에 값이 b인 원소를 찾아, 그 원소가 몇 번째 원소인지 출력합니다.
    # 그러한 원소가 여러 개라면, 그 중에서 index가 제일 작은 원소의 것을 출력합니다.
    # 그러한 원소가 없다면, 0을 출력합니다.
# "3 s e"
    # s번째 원소부터 e번째 원소까지 각 원소의 값을 공백으로 구분하여 차례대로 출력합니다.

각 질의를 차례대로 수행하는 프로그램을 작성해보세요.
*/
int main() {
    int n, q; // 1≤n≤100 , 1≤q≤100
    cin >> n >> q;
    int arr[100]; // n_max = 100
    int qn; // 질의 번호
    for(int i=0;i<n;i++) cin >> arr[i]; // 1~100
    for(int j=0;j<q;j++){
        cin >> qn;

        if(qn==1){
            int a;
            cin >> a; // 1≤a≤n
            cout << arr[a-1]; // a번째 원소 = arr[a-1]
        }

        else if(qn == 2){
            int b;
            cin >> b; // 1≤b≤100
            bool isexist = false;
            for(int i=0;i<n;i++){
                if(arr[i]==b){
                    cout << i+1 ; // arr[i]: i+1번째 원소
                    isexist = true;
                    break;
                }
            }
            if(isexist == false) cout << 0;  
        }

        else if(qn == 3){
            int s, e; // 1≤s≤e≤n
            cin >> s >> e;

            for(int i=s-1;i<=e-1; i++) cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}