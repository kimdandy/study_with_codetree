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
        else if(temp[i] >=37) b++;
        else if(cold[i] == 'Y') c++;
        else d++;
    }
 
    cout << a << " " << b << " " << c << " " << d << " ";
    if(a>=2) cout << "E";
    return 0;
}
/* 해설 답안
#include <iostream>

using namespace std;

int main() {
	// 카운팅 배열의 1에는 A인 사람의 수가, 2에는 B가, 3에는 C가, 4에는 D가 들어감
	int count_arr[5] = {};
	// type num = 분류 번호
	int type_num = 0;
	char s;
	int t;
	
	// s와 t를 입력받은 후 카운팅 배열을 통해 각각의 빈도 저장
	for(int i = 0; i < 3; i++) {
		cin >> s >> t;

		if(t >= 37 && s == 'Y')
			type_num = 1;
		else if(t >= 37)
			type_num = 2;
		else if(s == 'Y')
			type_num = 3;
		else
			type_num = 4;
		count_arr[type_num]++;
	}
	
    // A부터 D까지 나온 횟수를 출력
    for(int i = 1; i <= 4; i++) {
        cout << count_arr[i] << " ";
    }
	
	if(count_arr[1] >= 2)
		cout << "E";

    return 0;
} 
*/