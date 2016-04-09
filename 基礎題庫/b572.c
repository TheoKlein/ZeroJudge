#include <stdio.h>

int main() {
    int h1 , m1 , h2 , m2 , m3 , n;
    scanf("%d",&n);
    while(n != 0){
        scanf("%d%d%d%d%d",&h1 , &m1 , &h2 , &m2 , &m3);
        if(h1 > h2){
            puts("No");
        }else if(h1 < h2){
            int time = (h2 - h1 - 1) * 60 + (60 - m1) + m2;
            if(time >= m3){
                puts("Yes");
            }else{
                puts("No");
            }
        }else{
            if(m1 < m2){
                if(m2 - m1 > m3){
                    puts("Yes");
                }else{
                    puts("No");
                }
            }else{
                puts("No");
            }
        }
        n--;
    }
    return 0;
}
