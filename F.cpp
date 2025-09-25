#include <iostream>
using namespace std;

bool is_prime(int x){
    if (x < 2) return false;

    for (int i = 2; i * i <= x; i++){
        if (x % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int count = 0;  //prime count
    int num = 1;    // current

    while (count < n){
        num++;
        if (is_prime(num)) {
            count++;
        }
    }
    cout << num << endl;
    return 0;
}