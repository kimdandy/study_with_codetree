#include <iostream>
using namespace std;

/* Q. 감기 증상이 있으면 Y, 감기 증상이 없으면 N으로 나타내기로 하고, 체온을 쟀을 때 수치에 따라 진료소를 다르게 구분하려고 합니다.

# 증상도 있고 37℃ 이상일 때 A
# 증상은 없지만 37℃ 이상일 때 B
# 증상은 있지만 체온은 정상일 때 C
# 둘 다 괜찮은 경우엔 D

한 번에 3명씩 검사하는데 A로 가는 사람이 2명 이상 나올때는 위급상황 E로 분류합니다.*/
int main() {
    char cold[3];
    int temp[3]; 
    int a=0, b=0, c=0, d=0;
    for(int i=0; i<3;i++){
        cin >> cold[i] >> temp[i]; // 30 ≤ temp[i] ≤ 40
        if(cold[i] == 'Y' && temp[i] >=37) a++;
        else if(cold[i] == 'N' && temp[i] >=37) b++;
        else if(cold[i] == 'Y' && temp[i] < 37) c++;
        else d++;
    }
    cout << a << " " << b << " " << c << " " << d << " ";
    if(a>=2) cout << "E";
    return 0;
}