#include <iostream>
#include <deque>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        deque<int> card;

        for(int i = n; i >= 1; i--){
            card.push_front(i); //4

            for(int j = 0; j < i; j++){
                card.push_front(card.back()); //4 ==> 4 4
                card.pop_back(); //4
            }
        }

        for(int i = 0; i < n; i++){
            cout << card[i] << " ";
        }
        cout << endl;
    }
    return 0;
}