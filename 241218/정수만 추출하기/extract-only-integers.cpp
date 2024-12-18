#include <iostream>
using namespace std;

/// Q. 공백을 포함하지 않는 두 개의 문자열이 주어지면 앞에서부터 정수 이외의 문자가 나오기 전까지의 부분에서 정수로 변환 가능한 부분을 변환한 후 두 수의 합을 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen : ~8
    int sum =0;
    for(int h=0; h<2; h++){
        cin >> str;
        string nc;
        int sz=0;
        for(int i=0; i<str.length(); i++)
            if( isdigit(str[i]) ){
                nc += str[i];
                sz ++;
            }
            else break;

        int n=0;
        for(int i=0;i<sz;i++){
            int dc =1;
            for(int j=0;j<(sz-i-1);j++) dc*=10;
            n += (int) (nc[i] - '0') * dc;
        }
        sum+=n;
    }
    cout << sum;
    return 0;
}