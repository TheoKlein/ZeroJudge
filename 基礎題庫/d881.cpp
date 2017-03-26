#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        long int n1 = 1, n2 = 2, sum = 3;
        for(int i = 0 ; i < 48 ; i++){
            int t = n2 - n1 + n;
            n1 = n2;
            n2 += t;
            sum += n2;
        }
        cout << sum << endl;
    }
}
