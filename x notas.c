#include <stdio.h>
int main()
{
	int x=0,notas[10],i=0;
	// VALORES 
	for(i=0;i<10;i++){			
		printf("entre com os valores %d:",i+1);
		scanf("%d",&notas[i]);
	}
	// X
		printf("entre com valor de x:");
	scanf("%d",&x);
	
	//COMPARAÇÃO
    for(i=0;i<10;i++){
		if(notas[i] % x == 0){
			printf("\n %d eh divisivel por %d:na posicao %d \n ",notas[i],x,i);
		}
    }
	system("pause");
	return 0;
}
