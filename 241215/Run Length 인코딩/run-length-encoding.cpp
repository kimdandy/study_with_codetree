#include <iostream>
using namespace std;

/* Q. 문자열 A가 주어졌을 때 문자열 A에 Run-Length Encoding을 적용한 이후의 결과를 구해보려고 합니다. 
Run-Length Encoding이란 간단한 비손실 압축 방식으로, 연속해서 나온 문자와 연속해서 나온 개수로 나타내는 방식입니다.

예를 들어, 문자열 A가 aaabbbbcbb인 경우 순서대로 a가 3번, b가 4번, c가 1번 그리고 b가 2번 나왔으므로 Run-Length Encoding을 적용하게 되면 a3b4c1b2가 됩니다.

문자열 A가 주어졌을 때, Run-Length Encoding을 적용한 이후의 결과를 출력하는 프로그램을 작성해보세요.*/
#include <string>
int main() {
    string a; // 1 ≤ 문자열 A의 길이 ≤ 1,000
    cin >> a;

    int alen = a.length();
    string rle[alen]; // 중복 문자 저장 배열
    int rle_len[alen]={}; // 중복문자 수 저장 배열
    int cnt = 1 , cn=0; // cnt:중복수 , cn:문자의 기수
    for(int i=1;i<alen;i++){ // 첫문자는 통과
        if(a[i] == a[i-1]){
            cnt++; // 이전과 문자가 같다면 중복수 증가
            if(i==alen-1){ // 마지막 순번 포함
                rle[cn] = a[i]; 
                rle_len[cn] = cnt; 
            } // 마지막 순번의 정보를 각 배열에 저장
        }
        else{ // 다르다면 이전 까지의 정보를 각 배열에 저장 후 초기화
            rle[cn] = a[i-1];
            rle_len[cn] = cnt; 
            cnt=1;
            cn++;
        }
    }
    
    int rle_len_sum = 0;
    for(int i=0;i<=cn;i++) {// 마지막 순번 포함
        if(rle_len[i]/1000 != 0) rle_len_sum+=4;
        else if(rle_len[i]/100 != 0) rle_len_sum+=3;
        else if(rle_len[i]/10 != 0) rle_len_sum+=2;
        else rle_len_sum +=1; // 자리수에 따라 더해지는 값을 다르게 적용
    } 
    cout << cn+1 + rle_len_sum << endl;
    for(int i=0;i<=cn;i++){
        cout << rle[i] << rle_len[i];
    }
    return 0;
}