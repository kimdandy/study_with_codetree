#include <iostream>
using namespace std;

/* Q. 두 사람에 대한 정보로 나이와 성별이 주어집니다. 
두 사람 중 한 사람이라도 19세이상이면서 남자라면 1을 출력하는 프로그램을 작성해보세요. */
int main() {
    int age1, age2;
    char gen1, gen2;
    cin >> age1 >> gen1;
    cin >> age2 >> gen2;

    if (age1 >=19 && gen1 == 'M' || age2 >= 19 && gen2 == 'M') cout << 1;
    else cout << 0;
    
    return 0;
}