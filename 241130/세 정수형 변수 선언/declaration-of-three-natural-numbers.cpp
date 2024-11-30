#include <iostream>
using namespace std;

int main() {
    // 출력 형식
     // 같은 자료형을 생성할 경우 하나의 자료형에 여러개의 변수를 동시 생성 가능
    int a = 7, b=23, c=30; 
     // C++에서는 cout에 순차적으로 <<뒤에 변수를 사용하면 차례대로 출력 가능    
    cout << a << " + " << b << " = " << c;  
    return 0;
}

// 문자열 string 을 사용 하기 위해서는 헤더인 #include <string> 을 코드 상단에 포함해야 함