#include <iostream>

using namespace std;

int main() {
    long int n;
    while(cin >> n){
        int count = 0; 
        while(n > 4){
            n -= n % 5;
            count += n / 5;
            n /= 5;
        }
        cout << count << endl;
    }
}
