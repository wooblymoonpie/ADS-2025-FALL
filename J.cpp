#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq; 
    char c;

    while(cin >> c){
        if(c == '!') break;

        if(c == '+'){
            int x; 
            cin >> x;
            dq.push_front(x);
        } 

        else if(c == '-'){
            int x;
            cin >> x;
            dq.push_back(x);
        } 

        else if(c == '*'){
            if (dq.empty()){
                cout << "error" << endl;
            }
            else if(dq.size() == 1){
                cout << dq.front() * 2 << endl;
                dq.pop_front();
            }
            else{
                int sum = dq.front() + dq.back();
                cout << sum << endl;
                dq.pop_front();
                dq.pop_back();
            }
        }
    }
    return 0;

    
}