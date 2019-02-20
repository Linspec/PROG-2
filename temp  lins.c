#include <stdio.h>
int main()
{
	float temp[15];
	float soma=0;
	int i;
	for(i=0;i<15;i++){
	
	printf("\n entre com a temperatura %d:",i+1);
	scanf("%f",&temp[i]);
	
		soma=soma+temp[i];
    }
	printf("a media das temperaturas foi %.2f",soma/15);
	
	system("pause");
	return 0;
}
