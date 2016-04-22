#include <stdio.h>
#include <stdlib.h>

int compare(const void* , const void*);

int main() {
    int n , i;
    while(scanf("%d",&n) != EOF){
        int input[n] , blank = 1;
        for(i = 0 ; i < n ; ++i)
            scanf("%d",&input[i]);
        
        qsort(input , n , sizeof(int) , compare);
        
        for(i = 0 ; i < n ; ++i){
            if(blank == 0)
                printf(" ");
            printf("%d",input[i]);
            blank = 0;
        }
        puts("");
    }
    return 0;
}

int compare(const void *a , const void *b){
    int *pa = (int*)a;
    int *pb = (int*)b;
    if(*pa % 10 > *pb % 10)
        return 1;
    else if(*pa % 10 < *pb % 10)
        return -1;
    else
        return (*pb - *pa);
}
