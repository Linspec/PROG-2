#include <stdio.h>
#include <stdlib.h>

float receber(float x,int y){
	float resul;
	 resul=x/y;
	 return resul;
}

int main(){
	float result,km;
	int car;
	
	printf("entre com o tipo do seu carro:");
	scanf("%c",&car);
	
	if(car=='a'){
		car=8;
	}
	else if(car=='b'){
		car=9;
	}
	else if(car=='c'){
		car=12;
	}
	else
		printf("não existe esse carro");
	
	printf("entre com o km feito:");
	scanf("%f",&km);
	
	result=receber(km,car);
	
	printf("essa foi a km/l do seu carro:%.2f",result);
	
	
	
	
	return 0;
}
