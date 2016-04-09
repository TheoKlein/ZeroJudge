#include <stdio.h>

int main() {
    int n , temp , one = 0 , two  = 0 , three  = 0 , i , blank = 1;
    scanf("%d",&n);
    while(n != 0){
        scanf("%d", &temp);
        switch(temp){
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
        }
        n--;
    }
    for(i = 0 ; i < one ; ++i){
        if(blank == 0){
            printf(" ");
        }
        printf("1");
        blank = 0;
    }
    for(i = 0 ; i < two ; ++i){
        if(blank == 0){
            printf(" ");
        }
        printf("2");
        blank = 0;
    }
    for(i = 0 ; i < three ; ++i){
        if(blank == 0){
            printf(" ");
        }
        printf("3");
        blank = 0;
    }
    puts("");
    return 0;
}
