#include <iostream>
using namespace std;

/// Q. n개의 수가 주어질 때, 모든 수를 더한 값을 좌측으로 한 칸 민 결과를 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    int n, num; //1 ≤ n ≤ 100
    cin >> n;

    int sum=0;
    for(int h=0;h<n;h++){
        cin >> num; // 10 ≤ 주어지는 수 ≤ 5,000
        sum += num;
    }

    string ssum = to_string(sum);
    char lst = ssum[0];
    for(int i=0;i<ssum.length()-1;i++) ssum[i]=ssum[i+1];
    ssum[ssum.length()-1] = lst;
    
    cout << ssum;
    return 0;
}