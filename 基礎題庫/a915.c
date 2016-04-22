#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

typedef struct point Point;

int compare(const void* , const void*);

int main() {
    int n , i;
    while(scanf("%d",&n) != EOF){
        Point *input;
        input = malloc(n * sizeof(Point));
        for(i = 0 ; i < n ; ++i)
            scanf("%d%d",&(input + i)->x , &(input + i)->y);
        
        qsort(input , n , sizeof(Point) , compare);
        
        for(i = 0 ; i < n ; ++i)
            printf("%d %d\n",(input + i)->x , (input + i)->y);
        
        free(input);
    }
    return 0;
}

int compare(const void *a , const void *b){
    Point *pa = (Point*)a;
    Point *pb = (Point*)b;
    if(pa->x > pb->x)
        return 1;
    else if(pa->x < pb->x)
        return -1;
    else{
        if(pa->y > pb->y)
            return 1;
        else if(pa->y < pb->y)
            return -1;
        else
            return 0;
    }
}
