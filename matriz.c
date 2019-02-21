#include <stdio.h>
int main()
{
 int matriz[5][5],x,i,j;
 //entre com valores
 	for(j=0;j<5;j++){
 	    for(i=0;i<5;i++){
	  		printf("entre com os valores da matriz[%d][%d]:",i+1,j+1);
	 	 	scanf("%d",&matriz[i][j]);
	    }
    }
 //aplicando os valores em seus lugares   
	for(j=0;j<5;j++){
		 	
	    for(i=0;i<5;i++){
			printf("\t %d",matriz[j][i]);
		}
		printf("\n ");
	}
	printf("\n entre com valor de x:");
	scanf("%d",&x);
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			if(matriz[i][j]==x){
				printf("\n o valor de x se encontra na posicao matriz[%d][%d] \n",i+1,j+1);
			}
	    }
    }
	
system("pause");
return 0; 
}
