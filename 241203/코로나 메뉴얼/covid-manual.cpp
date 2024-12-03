#include <iostream>
using namespace std;

/* Q. 
감기 증상이 있으면 Y, 감기 증상이 없으면 N으로 나타내기로 하고, 체온을 쟀을 때 수치에 따라 진료소를 다르게 구분하려고 합니다.

-증상도 있고 37℃ 이상일 때 A
-증상은 없지만 37℃ 이상일 때 B
-증상은 있지만 체온은 정상일 때 C
-둘 다 괜찮은 경우엔 D
한 번에 3명씩 검사하는데 A로 가는 사람이 2명 이상 나올때는 위급상황으로 분류합니다. 
위급상황인지를 판단하는 프로그램을 작성해보세요.
*/
int main() {
    char c1, c2, c3, s1, s2, s3;
    int t1, t2, t3;
    cin >> c1 >> t1 >> c2 >> t2 >> c3 >> t3;

    if (c1 == 'Y'){
        if (t1 >=37) s1 = 'A'; // 문자열은 작은 따옴표
        else s1 = 'C';
    }
    else{
        if (t1 >=37) s1 = 'B';
        else s1 ='D'; 
    }

    if (c2 == 'Y'){
        if (t2 >=37) s2 = 'A';
        else s2 ='C';
    }
    else{
        if (t2 >=37) s2 = 'B';
        else s2 = 'D'; 
    }

    if (c3 == 'Y'){
        if (t3 >=37) s3 ='A';
        else s3 = 'C';
    }
    else{
        if (t3 >=37) s3 = 'B';
        else s3 = 'D'; 
    }

    if(s1 == 'A'){
        if(s2 == 'A' or s3 == 'A') cout << "E";
        else cout << "N";
    }
    else {
        if (s2 == 'A' and s3 == 'A') cout << "E";
        else cout << "N";
    }

    return 0;
}