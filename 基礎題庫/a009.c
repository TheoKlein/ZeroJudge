#include <stdio.h>
#include <string.h>
//input - 7 = output

int main (){
    char str[100000];
    while(gets(str)!=NULL){
	int i, leng;
	leng = strlen(str);
	for( i = 0 ; i < leng ; i ++)
    	    str[i] -= 7;
	    printf("%s\n",str);
    }
    return 0;
}
