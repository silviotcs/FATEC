/*menu padrao em C puro - aula 17/03/23 sexta-feira - Prof. Luis Alexandre*/
/*Disciplina - Lab. de programação e redes*/


/* função fica antes do main para ser lida e depois calulada dentro do main*/
float calc_autonomia(float tanque, float consumo){ 


    float autonomia; 

    if(tanque > 0){ 
        if(consumo > 0){ 
            autonomia = tanque * consumo; 
        }else{ 
            autonomia = -998; 
        } 
    }else{ 
        autonomia = -999; 
    } 
    return autonomia; 
} 

/* código principal */


main(){
	int op=1;
	float cons, litros, autonomia;
	
		while(op!=0){
			system("cls");
			printf("# Menu Calculo Autonomia #");
			printf("\n #1 - Autonomia por litro");
			printf("\n #2 - Opcao 2");
			printf("\n #0 - Sair/encerrar");
			printf("\n Digite a opcao: ");
			
			scanf("%i",&op);
			
				if(op==1){
					system("cls");
					printf("opcao 1 - Autonomia");
					/* colocar programa aqui dento*/
					printf("\n\n Digite o consumo por litro do veiculo:");
					scanf("%f", &cons);
					printf("\n Digite a quantidade de litros no tanque: ");
					scanf("%f", &litros);
					autonomia = calc_autonomia(litros,cons);
					printf("\n\n A Autonomia: %f", autonomia);
					
					
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
			
			
	

