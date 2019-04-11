	#include<stdio.h>
    #include<stdlib.h>
    int vaga[20]; 
    int  x, opcao, ocupada, livre;
    int vagas(){
    	for(x=0; x<20; x++){
    		vaga[x] = 0;
    	}
	}
	int menu(){
		system("cls"); // limpa a tela
    		printf("MENU \n");
    		printf("1-Visao Geral \n");
    		printf("2-Registrar Entrada \n");
    		printf("3-Registrar Saida \n");
    		printf("4-Sair do programa \n");
    		printf("Opcao: ");
    		scanf("%d",&opcao);
    		
    		return opcao;
		}
	int vg(){	system("cls"); // limpa a tela
    			ocupada = 0;
    			for(x=0;x<20;x++){
    				printf("%d ", vaga[x]);
    				if(vaga[x] == 1) ocupada++;
    			}//fim-for
    			printf("\nOcupadas = %d", ocupada);
    			printf("\nLivres = %d \n", 20-ocupada);
    			system("pause"); // aguarda tecla
    			return 0;
    		}
    int re(){
    	livre = -1;  // sem vaga livre
    			for(x=0; x<20; x++){
    				if(vaga[x] == 0){
    					livre = x;
    				}
    			}
    			if(livre == -1){
    				printf("Nao ha vagas! \n");
    				system("pause");
    			}else{
    				printf("A vaga %d esta livre.\n", livre);
    				printf("Usar? (1-sim/2-nao) ");
    				scanf("%d",&x);
    				if(x == 1){
    					vaga[livre] = 1;
    					printf("Entrada registrada! \n");
    					system("pause");
    				}//fim-if-usar
    			}//fim-if-livre
    		 // encerra o loop for
    		return 0;
		}
	int rs(){
		printf("Qual vaga deseja liberar? (0-19) ");
    			scanf("%d",&x);
    			if( x<0 || x>19){ 
    				printf("Vaga invalida! \n");
    			}else if(vaga[x] == 0){
    				printf("A vaga ja esta livre! \n");
    			}else{
    				vaga[x] = 0;
    				printf("Vaga liberada! \n");
    			}
    			system("pause");
    			return 0;
	}
	int execut(){
			switch (opcao){
    			case 1:
			{
    			vg();
    		
    		}//fim-opcao-1
    		break;
    		case 2://encontrar uma vaga
    			re();
    		break;
    		case 3:
    			rs();
    		break;
    		default:
				printf("tenha um bom dia!\n"); 
			break;
				}
		return opcao;
	}
    int main(){
    	vagas();
    	do{
			menu();
    		execut();
    	}while(opcao!=4);
    	system("pause");
    	return 0;
    }
