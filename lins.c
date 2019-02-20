#include <stdio.h>
int main()
{
	float notas[15];
	float soma=0;
	float media;
	int cont=0,i;
	
	for(i=0;i<15;i++){
	
	printf("\n entre com usa nota aluno %i:",i+1);
	scanf("%f",&notas[i]);
	
	soma=soma+notas[i];
     }
     printf("%.2f",soma);
     
    media=soma/15;
    printf("\n %f",media);
    
    for(i=0;i<15;i++)
    {
	
    if(notas[i]>=media)
     
	{
		cont++;
		}	
    } 
	printf("\n passaram %d \n",cont);
	
	
	
	
	system("pause");
	return 0;
	
}
