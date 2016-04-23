#include <stdio.h>
#include <stdlib.h>

struct data{
    int minutes;
    int seconds;
};

typedef struct data Data;

int main() {
    int n;
    while(scanf("%d",&n) != EOF){
        int tracks , line = 0;
        for(tracks = 1 ; tracks <= n ; ++tracks){
            int laps , i;
            scanf("%d",&laps);
            Data *input;
            input = calloc(laps , sizeof(Data));
            
            scanf("%d%d",&input->minutes , &input->seconds);
            int bestLapSeconds = input->minutes * 60 + input->seconds;
            int totalSeconds = input->minutes * 60 + input->seconds;
            
            for(i = 1 ; i < laps ; ++i){
                scanf("%d%d",&(input + i)->minutes , &(input + i)->seconds);
                totalSeconds += (input + i)->minutes * 60 + (input + i)->seconds;
                if(bestLapSeconds > (input + i)->minutes * 60 + (input + i)->seconds){
                    bestLapSeconds = (input + i)->minutes * 60 + (input + i)->seconds;
                }
            }
            if(line == 1)
                puts("");
            printf("Track %d:\n",tracks);
            printf("Best Lap: %d minute(s) %d second(s).\n",bestLapSeconds / 60 , bestLapSeconds % 60);
            printf("Average: %d minute(s) %d second(s).\n",totalSeconds / laps / 60 , totalSeconds / laps % 60);
            line = 1;
            free(input);
        }
    }
    return 0;
}
