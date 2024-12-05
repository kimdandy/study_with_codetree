#include <iostream>
using namespace std;

/* Q. 사각형의 가로세로의 길이와 문자가 주어집니다. 
문자 C가 주어지는 줄까지 사각형의 넓이를 구하는 프로그램을 작성해보세요.*/
int main() {
    int w, l; // w: 너비, l: 길이
    // 1<=w,l<=100
    char c;
    while(true){
            cin >> w >> l >> c;
            cout << w*l << endl;
            if(c=='C') break;
        }
    return 0;
}