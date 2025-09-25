#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    queue<int> qS, qK; 

    for (int i = 0; i < n; i++){
        if (s[i] == 'S') qS.push(i);
        else qK.push(i);
    }

    while (!qS.empty() && !qK.empty()){
        int sNum = qS.front();
        int kNum = qK.front();
        qS.pop();
        qK.pop();

        if (sNum < kNum) {
            qS.push(sNum + n);
        }
        else qK.push(kNum + n);
    }

    if (!qS.empty()) cout << "SAKAYANAGI";
    else cout << "KATSURAGI";
    return 0;
}