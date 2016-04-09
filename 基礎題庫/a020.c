#include <stdio.h>

int main() {
    int code[26] = {10, 11, 12, 13, 14, 15, 16,
    17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25,
    26, 27, 28, 29, 32, 30, 31, 33};
    char id[10];
    while(gets(id) != NULL){
        int check = 0 , i , j = 8;
        check += (code[id[0] - 65]) / 10 + ((code[id[0] - 65]) % 10) * 9;
        for(i = 1 ; i < 9 ; ++i){
            check += (id[i] - 48) * j;
            --j;
        }
        check += id[9] - 48;
        if(check % 10 == 0)
            puts("real");
        else
            puts("fake");
    }
    return 0;
}
