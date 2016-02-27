#include <stdio.h>

int main (){
    int a,b,c,d,e,n,i;
	
    while(scanf("%d",&n)!= EOF){
	for ( i = 0 ; i < n ; i ++){
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if (c - b == b - a){
		printf("%d %d %d %d %d\n",a,b,c,d,d*2 - c);
	    }else if (c / b == b / a){
		printf("%d %d %d %d %d\n",a,b,c,d,(d*d)/c);
	    }
	}
    }
    return 0;
}
