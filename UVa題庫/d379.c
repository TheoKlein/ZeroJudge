#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n > 0){
        char sign , blank;
        long long int a , b , sum = 0 , i = 0 , a2 = 0 , b2 = 0 , ten = 10;
        scanf("%llx%c%c%c%llx%c", &a , &blank , &sign , &blank , &b , &blank);
        
        switch(sign){
            case '+':
                sum = a + b;
                break;
            case '-':
                sum = a - b;
                break;
        }
        
        while(a > 0){
            a2 += a % 2 * pow(ten , i);
            a /= 2;
            ++i;
        }
        
        i = 0;
        while(b > 0){
            b2 += b % 2 * pow(ten , i);
            b /= 2;
            ++i;
        }
        
        printf("%013lld %c %013lld = %lld\n" , a2 , sign , b2 , sum);
        
        --n;
    }
    return 0;
}
