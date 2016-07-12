#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int num;
    cin >> num;
    while(num-- != 0){
        int left = 0 , right = 0 , result = 0;
        char operation;
        bool center = false;
        string input;
        cin >> input;
        for(int i = 0 ; i < input.length() ; ++i){
            if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '%'){
                operation = input[i];
                center = true;
            }else if(isdigit(input[i])){
                if(center){
                    if(right != 0)
                        right *= 10;
                    right += input[i] - '0';
                }else{
                    if(left != 0)
                        left *= 10;
                    left += input[i] - '0';
                }
            }
        }
        
        switch(operation){
            case '+':
                result = left + right;
                break;
            case '-':
                result = left - right;
                break;
            case '*':
                result = left * right;
                break;
            case '/':
                result = left / right;
                break;
            case '%':
                result = left % right;
                break;
        }
        cout << result << endl;
    }
}
