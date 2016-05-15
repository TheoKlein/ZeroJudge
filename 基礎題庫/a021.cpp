#include <iostream>
#include <cmath>
#include <string>
#define DIGIT 500

using namespace std;

class HugeInteger
{
public:
    HugeInteger( string );
    
    HugeInteger add( HugeInteger );
    HugeInteger add( short );
    HugeInteger subtract( HugeInteger );
    HugeInteger multiply( HugeInteger );
    HugeInteger divide( HugeInteger );
    HugeInteger modulus( HugeInteger );
    
    bool isEqualTo( HugeInteger );
    bool isGreaterThanOrEqualTo( HugeInteger );
    bool isZero();
    void input( const string & );
    void output();
private:
    short integer[ DIGIT ];
};

int main(){
    string a , b;
    char operation;
    while(cin >> a >> operation >> b){
        HugeInteger num1(a);
        HugeInteger num2(b);
        
        switch(operation){
            case '+':
                num1.add(num2).output();
                cout << endl;
                break;
            case '-':
                if(num1.isGreaterThanOrEqualTo(num2))
                    num1.subtract(num2).output();
                else{
                    cout << "-";
                    num2.subtract(num1).output();
                }
                cout << endl;
                break;
            case '*':
                num1.multiply(num2).output();
                cout << endl;
                break;
            case '/':
                num1.divide(num2).output();
                cout << endl;
                break;
            case '%':
                num1.modulus(num2).output();
                cout << endl;
                break;
        }
    }
}

HugeInteger::HugeInteger( string number ){
    input(number);
}

void HugeInteger::input(const string &number){
    for(int i = 0 ; i < DIGIT ; ++i)
        integer[i] = 0;
    for(long int i = number.length() - 1  , j = 0 ; i >= 0 ; --i , ++j)
        integer[i] = number[j] - 48;
}

void HugeInteger::output(){
    if(this->isZero()){
        cout << "0";
    }else{
        bool zeroCheck = false;
        for(int i = DIGIT - 1 ; i >= 0 ; --i){
            if(zeroCheck)
                cout << integer[i];
            else if(integer[i - 1] != 0)
                zeroCheck = true;
        }
    }
}

bool HugeInteger::isZero(){
    for(int i = 0 ; i < DIGIT ; ++i){
        if(integer[i] != 0)
            return false;
    }
    return true;
}

bool HugeInteger::isEqualTo(HugeInteger number){
    for(int i = 0 ; i < DIGIT ; ++i)
        if(integer[i] != number.integer[i])
            return false;
    return true;
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger number){
    int num1First = 0 , num2First = 0;
    for(int i = DIGIT - 1 ; i >= 0 ; --i)
        if(integer[i] != 0){
            num1First = i;
            break;
        }
    for(int i = DIGIT - 1 ; i >= 0 ; --i)
        if(number.integer[i] != 0){
            num2First = i;
            break;
        }
    
    if(num1First > num2First)
        return true;
    else if(num1First < num2First)
        return false;
    else{
        for(int i = num1First ; i >= 0 ; --i){
            if(integer[i] > number.integer[i])
                return true;
            else if(integer[i] < number.integer[i])
                return false;
            else
                continue;
        }
        return true;
    }
}

HugeInteger HugeInteger::add(HugeInteger number){
    HugeInteger sum("0");
    for(int i = 0 ; i < DIGIT ; ++i){
        sum.integer[i] += integer[i] + number.integer[i];
        if(sum.integer[i] >= 10){
            sum.integer[i] -= 10;
            sum.integer[i + 1]++;
        }
    }
    return sum;
}

HugeInteger HugeInteger::add(short number){
    HugeInteger sum("0");
    sum = *this;
    sum.integer[0] += number;
    for(int i = 0 ; i < DIGIT ; ++i){
        if(sum.integer[i] >= 10){
            sum.integer[i] -= 10;
            sum.integer[i + 1]++;
        }
    }
    return sum;
}

HugeInteger HugeInteger::subtract(HugeInteger number){
    HugeInteger result("0");
    for(int i = 0 ; i < DIGIT ; ++i){
        if(integer[i] - number.integer[i] < 0){
            result.integer[i] = integer[i] - number.integer[i] + 10;
            integer[i + 1]--;
        }else{
            result.integer[i] = integer[i] - number.integer[i];
        }
    }
    return result;
}

HugeInteger HugeInteger::multiply(HugeInteger number){
    HugeInteger result("0");
    int num1First = 0 , num2First = 0;
    for(int i = DIGIT - 1 ; i >= 0 ; --i){
        if(integer[i] != 0){
            num1First = i;
            break;
        }
    }
    for(int i = DIGIT - 1 ; i >= 0 ; --i){
        if(number.integer[i] != 0){
            num2First = i;
            break;
        }
    }
    int shift = 0;
    for(int i = 0 ; i <= num2First ; ++i){
        for(int j = 0 ; j <= num1First ; ++j)
            result.integer[j + shift] += integer[j] * number.integer[i];
        shift++;
    }
    
    for(int i = 0 ; i < DIGIT ; ++i){
        if(result.integer[i] >= 10){
            result.integer[i + 1] += result.integer[i] / 10;
            result.integer[i] = result.integer[i] % 10;
        }
    }
    return result;
}

HugeInteger HugeInteger::divide(HugeInteger number){
    HugeInteger result("0");
    if(this->isZero())
        return result;
    else if(number.isGreaterThanOrEqualTo(*this)){
        if(this->isEqualTo(number)){
            result = result.add(1);
            return result;
        }else
            return result;
    }else{
        int num1First = 0 , num2First = 0;
        for(int i = DIGIT - 1 ; i >= 0 ; --i){
            if(integer[i] != 0){
                num1First = i;
                break;
            }
        }
        for(int i = DIGIT - 1 ; i >= 0 ; --i){
            if(number.integer[i] != 0){
                num2First = i;
                break;
            }
        }
        
        HugeInteger temp("0");
        HugeInteger ten("10");
        for(int i = num1First ; i >= num1First - num2First ; --i){
            temp = temp.multiply(ten);
            temp = temp.add(integer[i]);
        }
        
        int shift = num1First - num2First;
        while(shift >= 0){
            while(temp.isGreaterThanOrEqualTo(number)){
                temp = temp.subtract(number);
                result = result.add(1);
            }
            if(shift != 0){
                temp = temp.multiply(ten);
                result = result.multiply(ten);
            }
            temp = temp.add(this->integer[shift - 1]);
            shift--;
        }
        return result;
    }
}

HugeInteger HugeInteger::modulus(HugeInteger number){
    HugeInteger result("0");
    if(this->isZero())
        return result;
    else if(number.isGreaterThanOrEqualTo(*this))
        return result;
    else{
        int num1First = 0 , num2First = 0;
        for(int i = DIGIT - 1 ; i >= 0 ; --i){
            if(integer[i] != 0){
                num1First = i;
                break;
            }
        }
        for(int i = DIGIT - 1 ; i >= 0 ; --i){
            if(number.integer[i] != 0){
                num2First = i;
                break;
            }
        }
        
        HugeInteger temp("0");
        HugeInteger ten("10");
        for(int i = num1First ; i >= num1First - num2First ; --i){
            temp = temp.multiply(ten);
            temp = temp.add(integer[i]);
        }
        
        int shift = num1First - num2First;
        while(shift >= 0){
            while(temp.isGreaterThanOrEqualTo(number)){
                temp = temp.subtract(number);
                result = result.add(1);
            }
            if(shift != 0){
                temp = temp.multiply(ten);
                result = result.multiply(ten);
            }
            temp = temp.add(this->integer[shift - 1]);
            shift--;
        }
        return temp;
    }
}
