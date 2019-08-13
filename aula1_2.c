#include <stdio.h>
#include <stdlib.h>

int main(){
	float sal,bonus,h,tot;
	
	printf("Quantas horas de aula voce lesiona?");
	scanf("%f",&h);
	
	printf("Quanto recebes por hora?");
	scanf("%f",&sal);
	
	tot=sal*h;
	
	if(tot<1500){
		bonus=(tot*10)/100;
		tot=tot+bonus;
	}
	
	else{
		bonus=(tot*5)/100;
		tot=tot+bonus;
	}
	
	printf("Seu salario final e %.2f",tot);
	
	
	return 0;
}
