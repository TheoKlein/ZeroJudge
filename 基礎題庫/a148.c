#include <stdio.h>

int main() {
    int n;
    int score[100];
    double average,sum;
    while(scanf ("%d",&n) != EOF){
        sum = 0;
        for (int i = 0 ; i < n ; i ++){
            scanf ("%d",&score[i]);
            sum += score[i];
        }
        average = sum / n;
        if (average > 59){
            printf ("no\n");
        }else if (average <= 59){
            printf ("yes\n");
        }
    }
    return 0;
}
