#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_prime(int x){
    if (x < 2) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }

    return true;
}

int main(){
    int n;
    cin >> n;

    vector<int> pr;
    int num = 2;

    while (pr.size() < 2000){
        if (is_prime(num)) pr.push_back(num);
        num++;
    }

    vector<int> sup;
    for (int i = 0; i < pr.size(); i++){
        if (is_prime(i + 1)) sup.push_back(pr[i]);
    }

    cout << sup[n - 1] << endl;
    return 0;
}