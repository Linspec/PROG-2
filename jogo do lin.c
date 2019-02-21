#include <stdio.h>
int main()
{
	int mat[3][3],i,j,p1=1,v=0,cont1,cont2;
	//pegar valores
	for(j=0;j<3;j++){
		
		for(i=0;i<3;i++){
			
		    printf("\n digite seu tabuleiro %d %d:",i+1,j+1);
			scanf("%d",&mat[i][j]);
    	}
    	
	}
	//montar jogo
	for(j=0;j<3;j++){
		
		for(i=0;i<3;i++){
			printf("\t %d",mat[i][j]);
			if(mat[i][j]==1){
				//ver quantas vezes o jogador 1 jogou
				cont1++;
			}
			if(mat[i][j]==2){
				//ver quantas vezes o jogador 2 jogou
				cont2++;
			}
		}
		printf("\n");
	}
		
		//anuncio de pontos
		printf("\n pontos do jogardor 1:%d \n",cont1);
		printf("\n pontos do jogardor 2:%d \n",cont2);
		
		//quem ganhou
		if(cont1>cont2){
			printf("Jogador1:GANHOU!!!\n");
		}
	    else
	    printf("Jogador2:Ganhou!!!\n");
	    
	    
	system("pause");
	return 0;
}
