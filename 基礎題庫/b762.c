#include <stdio.h>
#include <string.h>

int main() {
    char c;
    int n , kill = 0 , die = 0 , assist = 0 , combo = 0;
    char Kill[] = "Get_Kill";
    char Assist[] = "Get_Assist";
    char Die[] = "Die";
    scanf("%d%c",&n,&c);
    while(n-- != 0){
        char command[15];
        gets(command);
        char *filter;
        filter = strtok(command," \t");
        if(strcmp(filter,Kill) == 0){
            kill++;
            combo++;
            switch (combo){
                case 1:
                case 2:
                    puts("You have slain an enemie.");
                    break;
                case 3:
                    puts("KILLING SPREE!");
                    break;
                case 4:
                    puts("RAMPAGE~");
                    break;
                case 5:
                    puts("UNSTOPPABLE!");
                    break;
                case 6:
                    puts("DOMINATING!");
                    break;
                case 7:
                    puts("GUALIKE!");
                    break;
                default:
                    puts("LEGENDARY!");
                    break;
            }
        }else if(strcmp(filter , Assist) == 0){
            assist++;
        }else if(strcmp(filter , Die) == 0){
            die++;
            if(combo < 3)
                puts("You have been slained.");
            else if(combo >= 3)
                puts("SHUTDOWN.");
            combo = 0;
        }
    }
    printf("%d/%d/%d\n",kill,die,assist);
    return 0;
}
