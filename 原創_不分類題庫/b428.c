#include <stdio.h>

int main() {
    char input1[1005];
    char input2[1005];
    while(gets(input1) && gets(input2) != NULL){
        int num1 = (int)input1[0];
        int num2 = (int)input2[0];
        
        if(num1 > num2)
            printf("%d\n" , 26 - num1 + num2 );
        else if(num1 < num2)
            printf("%d\n",num2 - num1);
        else
            printf("0\n");
    }
    return 0;
}
