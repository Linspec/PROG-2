#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,i;
	float resul;
	
	printf("*****ENTRADA*****\nentre com um valor:");
	scanf("%d",&num);
	
	printf("\n****SAIDA*****");
	for(i=1;i<=num;i++){
	//	printf("\n0");
		resul=num%i;
		
		if(resul==0){
	//		printf("\n1");
			printf("\n %d divide %d",i,num);
		}
	/*	else
		printf("\n2");
	*/	
	}

	
	return 0;
}
