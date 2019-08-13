#include <stdio.h>
#include <stdlib.h>


int main(){
	int a=8,b=9,c=12,op;
	float km,car;
	
	
	printf("\nescolha um tipo de carro:A,B,C");
	scanf("%c",&op);
	
	printf("\nQuantos km o seu carro fez?");
	scanf("%f",&km);
	
	switch (op){
	
		case 'A':
			car=km/a;
		break;
		
		case 'B':
			car=km/b;
		break;
		
		case 'C':
			car=km/c;
		break;
	}
	
	printf("a media dos km/L percorridos:%.2f",car);
	
	
	
	return 0;
}
