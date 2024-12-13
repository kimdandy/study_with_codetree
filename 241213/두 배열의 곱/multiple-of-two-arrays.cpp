#include <iostream>
using namespace std;

/// Q. 3행 3열의 배열 두 개가 주어지면 두 배열의 같은 위치에 있는 수의 곱을 출력하는 프로그램을 작성해보세요.
int main() {
    int a[3][3], b[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin >> a[i][j];    
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin >> b[i][j];

    int mul[3][3] = {};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mul[i][j] = a[i][j]*b[i][j];
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}