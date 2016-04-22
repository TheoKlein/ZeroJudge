#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct string{
    char data[10];
};

typedef struct string String;

int compare(const void* , const void*);

int main() {
    int n , i;
    char c;
    while(scanf("%d%c",&n,&c) != EOF){
        String *input;
        input = malloc(n * sizeof(String));
        for(i = 0 ; i < n ; ++i)
            gets((input + i)->data);
        
        qsort(input , n , sizeof(String), compare);
        
        for(i = 0 ; i < n ; ++i)
            puts((input + i)->data);
        free(input);
    }
    return 0;
}

int compare(const void *a , const void *b){
    String *pa = (String*)a;
    String *pb = (String*)b;
    return strcmp(pa->data , pb->data);
}
