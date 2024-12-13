#include <iostream>
using namespace std;

/// Q. 자연수로 이루어진 2행 4열의 배열이 주어지면 가로 평균, 세로 평균, 전체 평균을 소수 첫째 자리까지만 출력하는 프로그램을 작성해보세요.
int main() {
    cout << fixed;
    cout.precision(1);

    int arr[2][4];
    int sum_all=0; // 총합
    for(int i=0;i<2;i++){
        int sum_line=0;  // 가로 합
        for(int j=0;j<4;j++){
            cin >> arr[i][j]; // 1~100
            sum_line += arr[i][j]; 
        }
        cout << double(sum_line)/4 << " ";
        sum_all +=sum_line;
    }

    cout << endl;
    
    for(int j=0;j<4;j++){
        int sum_row =0; // 세로 합
        for(int i=0;i<2;i++) sum_row+=arr[i][j];
        cout << double(sum_row)/2 << " ";
    }

    cout << endl << double(sum_all)/(2*4);
          
    return 0;
}