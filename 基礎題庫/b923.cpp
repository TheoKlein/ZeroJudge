#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    stack<int> intStack;

    cin >> n;
    while(n--){
        int action;
        cin >> action;
        switch(action){
            case 1:
                intStack.pop();
                break;
            case 2:
                cout << intStack.top() << endl;
                break;
            case 3:
                int tmp;
                cin >> tmp;
                intStack.push(tmp);
                break;
        }
    }
}
