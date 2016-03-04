#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int result = n % 5;
    
    switch(result){
        case 0:
            printf("U\n");
            break;
        case 1:
            printf("G\n");
            break;
        case 2:
            printf("Y\n");
            break;
        case 3:
            printf("T\n");
            break;
        case 4:
            printf("I\n");
            break;
    }
    
    return 0;
}
