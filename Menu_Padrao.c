/*menu padrao em C puro - aula 17/03/23 sexta-feira - Prof. Luis Alexandre*/
/*Disciplina - Lab. de programação e redes*/




main(){
	int op=1;
	
		while(op!=0){
			system("cls");
			printf("# Menu #");
			printf("\n #1 - Opcao 1");
			printf("\n #2 - Opcao 2");
			printf("\n #0 - Sair/encerrar");
			printf("\n Digite a opcao: ");
			
			scanf("%i",&op);
			
				if(op==1){
					system("cls");
					printf("opcao 1");
					/* colocar programa aqui dento*/
					
					printf("\nDigite uma tecla para continuar");
					getch();
					
				}else if (op==2){
					system("cls");
					printf("opcao 2");
					/* colocar programa aqui dento*/
		
					printf("\nDigite uma tecla para continuar");
					getch();
					
					}else if (op==0){
					system("cls");
					printf("Encerrado, obrigado!");
									
								
				}else{
					system("cls");
					printf("opcao invalida");
					printf("\nDigite uma tecla para continuar");
					getch();
				}/*entao para tecla invalida a partir do 3, menu nao existe*/
		}/*while - enquanto*/
					
	}/*main principal*/
			
			
	

