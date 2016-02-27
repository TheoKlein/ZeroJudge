#include <stdio.h>

int main (){
	int row;
	int column;
	int array[100][100];
	
	while(scanf("%d%d",&row,&column)!=EOF){
		int x,k,y,t;
		for(x = 0 ; x < row ; x++){
			for(k = 0 ; k < column ; k++)
				scanf("%d",&array[x][k]);
		}
		for( y = 0 ; y <column ; y++){
			for(t = 0 ; t < row ; t++)
				printf("%d ",array[t][y]);
		printf("\n");
		}
	}
	return 0;
}
