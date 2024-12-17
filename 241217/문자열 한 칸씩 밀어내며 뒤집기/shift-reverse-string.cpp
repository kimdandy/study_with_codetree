#include <iostream>
using namespace std;

/* Q. 문자열 한 개 입력으로 주어지고 q개의 요청이 주어지면, 각 요청을 수행한 결과를 모두 출력하는 코드를 작성해보세요. 요청의 종류에는 아래의 세 가지가 있습니다.

1. 가장 앞에 있는 문자를 제외한 나머지 문자를 한 칸씩 앞으로 당기고 가장 앞에 있던 문자를 가장 뒤로 옮깁니다.

2. 가장 뒤에 있는 문자를 제외한 나머지 문자를 한 칸씩 뒤로 밀고 가장 뒤에 있던 문자를 가장 앞으로 옮깁니다.

3.문자열을 좌우로 뒤집습니다.*/
#include <string>
int main() {
    string str; // 1 ≤ 초기 문자열의 길이 (n) ≤ 1,000
    int q, qn; // 1 ≤ q ≤ 1,000
    cin >> str >> q;
    int n = str.length();
    for(int h=0;h<q;h++){
        cin >> qn;
        if(qn == 1){
            char fst = str[0];
            for(int i=0;i<n;i++) str[i] = str[i+1];
            str[n-1] = fst;
        }
        else if(qn == 2){
            char lst = str[n-1];
            for(int i=n-1;i>=0;i--) str[i] = str[i-1];
            str[0] = lst;
        }
        else if(qn == 3){
            string str2=str; // str과 같은 크기의 배열을 만들기위해 복사
            for(int i=0; i<n;i++) str2[i] = str[n-1-i]; // 복사한 배열에 뒤집은 값 저장 후
            str = str2; // 원본에 다시 복사
        
            /*// 해설본
            // 문자열의 앞부터 순회하며 좌우 대칭 위치에 있는 문자와 swap해줍니다. 
            // 단, 문자열의 절반만 순회해줍니다.
            char temp;
            for(int i = 0; i < str_size / 2; i++) {
                temp = input_str[i];
                input_str[i] = input_str[str_size - i - 1];
                input_str[str_size - i - 1] = temp;
            }*/    
        }
        cout << str << endl;
    }
    return 0;
}