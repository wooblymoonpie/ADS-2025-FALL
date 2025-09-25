#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> boris, nursik;

    for (int i = 0; i < 5; i++) {
        int x; 
        cin >> x;
        boris.push(x);
    }
    for (int i = 0; i < 5; i++) {
        int x; 
        cin >> x;
        nursik.push(x);
    }

    int m = 0; //moves

    while (!boris.empty() && !nursik.empty() && m < 1000000) {
        int b = boris.front(); boris.pop();
        int n = nursik.front(); nursik.pop();

    
        if ((b == 0 && n == 9) || (b > n && !(b == 9 && n == 0))) {
            boris.push(b);
            boris.push(n);
        } 
        else {
            nursik.push(b);
            nursik.push(n);
        }
        m++;
    }

    if (m >= 1000000) {
        cout << "blin nichya" << endl;
    } 
    else if (boris.empty()) {
        cout << "Nursik " << m << endl;
    }
    else {
        cout << "Boris " << m << endl;
    }
    return 0;
}