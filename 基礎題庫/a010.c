#include <stdio.h>

int main (){
    int in;
    while(scanf("%d",&in)!=EOF){
	int i;
	int count = 0;
	for ( i = 2 ; i * i <=in ; i ++){
	    while(in % i == 0){
		count++;
		in = in / i;
	    }
   	    if (count > 1 && in > 1)
		printf("%d^%d * ",i,count);
	    else if (count == 1 && in >1)
		printf("%d * ",i);
   	    else if (count > 1 && in == 1)
		printf("%d^%d\n",i,count);
	    else if(count == 1 && in == 1)
		printf("%d\n",i);
  	    count = 0;
	}
	if (in > 1)
	    printf("%d\n",in);
    }
	
    return 0;
}
