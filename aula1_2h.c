#include <stdio.h>
#include <stdlib.h>

float bonus(float x){
	float bon,resul;
	if(x<1500){
	bon=(x*10)/100;
	resul=x+bon;
	}
	else{
		bon=(x*5)/100;
		resul=x+bon;
	}
	return resul;
}

float horas(float x,float y){
	float result,resutot;
	result=x*y;
	resutot=bonus(result);
	return resutot;
}
void comeco(){
	float h,sal,result;
	printf("quantas horas voce trabalha:");
	scanf("%f",&h);
	printf("quanto por hora?:");
	scanf("%f",&sal);
	result=horas(h,sal);
	printf("o seu sal com bonus e %.2f",result);
}


int main(){
	comeco();
	
	return 0;
}
