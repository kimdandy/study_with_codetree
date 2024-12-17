#include <iostream>
using namespace std;

/* Q. 문자열 A와 문자열 B가 주어지면 문자열 A의 부분문자열 중 가장 앞에 등장하는 B와 같은 문자열을 찾아 지우려고 합니다.
 지우고 난 후 떨어져있는 A의 문자열들을 다시 붙여 만들어진 새로운 문자열에서 부분 문자열 B가 없을 때까지 지우는 것을 반복합니다.

예를 들어 문자열 A가 baabba, B가 ab라면 다음의 과정을 따르게 됩니다.

1. A의 3번째 위치에서 시작하여 4번째 위치에서 끝나는 부분 문자열이 최초로 B와 일치하는 문자열이므로 해당 문자열을 A에서 삭제합니다. baabba → baba
2. 새로 만들어진 문자열 baba에서 2번째 위치에서 시작하여 3번째 위치에서 끝나는 부분 문자열이 최초로 B와 일치하는 문자열이므로 해당 문자열을 삭제합니다. baba → ba
3. 남은 문자열 ba의 연속 부분문자열 중 문자열 B와 일치하는 문자열이 존재하지 않으므로 최종 결과는 ba가 됩니다.

최종적으로 남게 된 문자열을 출력하는 프로그램을 작성해보세요.*/
#include <string>
int main() {
    string a, b; // 1 ≤ 문자열 A의 길이, 문자열 B의 길이 ≤ 100
    cin >> a >> b;
    
    if(a.length()>=b.length()){ // a의 길이가 b보다 작으면 바로 a를 출력
        while(1){
            bool issubstr = false;
            for(int i=0; i< a.length() - (b.length()-1); i++){

                if(a == b) break;
                ///// a의 값이 사라지면 런타임 에러가 발생하여 a와 b가 같아진다면 루프 종료하고 출력하지 않음
                
                if(a.substr(i, b.length()) == b){
                    a=a.substr(0, i) + a.substr(i+b.length());
                    // 0부터 i번째 전까지 원소의 개수는 i개
                    // i부터 b의 길이 만큼의 원소를 빼고 나면 뒤에 남는 원소의 개수는 i+b의 길이 부터의 원소의 개수와 같음
                    /*  i=3 에서 문자열을 뺀다 하면(b=2)
                        111 11 1 111
                        111 00 1 111
                        0   i i+b
                        0~2 3  i+b~/0
                        3개 b=2 9-5=4개*/
                    //cout << i << " " << a << endl; // 확인용
                    issubstr = true;
                }
                
            }
            if(issubstr == false) break;
        }
    }
    if( a != b)  cout << a; 

    return 0; 
}