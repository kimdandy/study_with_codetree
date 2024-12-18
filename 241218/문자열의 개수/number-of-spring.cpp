#include <iostream>
using namespace std;

/* Q. 
알파벳으로 이루어진 문자열이 계속 주어지다가 '0'이 주어지면 입력을 종료하고 숫자 0이 주어지기 전까지의 문자열의 개수를 출력하고 홀수 번째 주어진 문자열을 한 줄에 1개씩 출력하는 프로그램을 작성해보세요. 
단, '0'은 무조건 주어진다고 가정해도 좋습니다.*/
#include <string>
int main() {
    string str[200]={}; // 1 ≤ 주어지는 각 문자열의 길이 ≤ 200
    int cnt=0;
    for(int h=0;h<200;h++){// 1 ≤ 주어지는 총 문자열의 수 ≤ 200
        cin >> str[h];
        if(str[h] == "0"){
            cout << h << endl;
            cnt = h;
            break;
        }
    }
    for(int i=0;i<cnt;i++)
        if(i%2==0) cout << str[i] << endl;
    
    return 0;
}