/* Projeto para calcular BTUs de ar condicionado nas principais regi�es brasileiras - Alunos FATEC - Faculdade de Tecnologia de Bauru */

/* bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>


/* Fun��o principal */
int main()
{
  
    char opp = -1; /* Initialize opp to -1 to enter the infinite loop */
    int people, number_dev, number_lamp, number_win, number_curt; /* Vari�veis para armazenar a quantidade de pessoas, dispositivos eletr�nicos, l�mpadas LED, janelas e cortinas */
    int h_a; /* Vari�vel para armazenar a op��o de resid�ncia ou com�rcio */
    char y_n_slab, y_n_win; /* Vari�vel para armazenar a op��o de laje ou n�o e quantidade de janelas */
    float footage, total_footage; /* Vari�vel para armazenar o tamanho do im�vel e o tamanho total do im�vel*/
    float final_calculation; /* Vari�vel para armazenar o c�lculo final*/
    bool negativeCheck = 0;


    while(opp != 0) {
        system("cls");
		
		printf("-------------------------------------------------------------------\n");
        printf("-Air Conditioner System (British Thermal Unit - A/C BTU Calculaor)-\n"); /* Calculador de Sistema de ar-condicionado em BTUs */
        printf("\n-1 - Option 1 (North and Northeast of Brazil)                     -"); /* Norte e Nordeste */
        printf("\n-2 - Option 2 (Midwest, South and Southeast of Brazil)            -"); /* Centro-Oeste, Sul e Sudeste */
        printf("\n-0 - Exit                                                         -\n");
        printf("-------------------------------------------------------------------\n");
        printf("\nInform Option: ");
        scanf("%i", &opp);

        if(opp == 1) {
            system("cls");

            printf("North and Northeast of Brazil\n");
            printf("\nOption 1 (Residential House) \nOption 2 (Commercial Apartment/Office)\nType the option number: ");
            scanf("%i", &h_a); /* Armazena a op��o de resid�ncia ou com�rcio */
            printf("Have slab (Y/N)? "); /* Pergunta se o im�vel possui laje ou n�o */
            scanf(" %c", &y_n_slab); /* Armazena a op��o de laje ou n�o */
            y_n_slab = toupper(y_n_slab);

            if(y_n_slab == 'Y') {
                total_footage = 0.0;
            }
            else if(y_n_slab == 'N') {
                do
				{
            		printf("What is the square footage (m2)? ");
                	scanf("%f", &footage);
                	
                	negativeCheck = (footage < 0);
                	
                	if(negativeCheck)
                	{
                		printf("\nInvalid negative input\n Please insert only positive numbers\n\n");
					}
				}while(negativeCheck);
				
                total_footage = footage;
            }
            else {
                printf("\nInvalid option for 'Have slab'.\n");
                printf("Press any key to return to menu...\n");
                getch();
                continue; /* Continue to the beginning of the infinite loop */
            }

			do
			{
				printf("Amount of people: ");
				scanf("%i", &people);
				printf("Inform number of electronic devices: ");
				scanf("%i", &number_dev);
				printf("Inform number of LED lamps: ");
				scanf("%i", &number_lamp);
				printf("Inform number of windows: ");
				scanf("%i", &number_win);
				printf("Inform number of blackout curtains: ");
				scanf("%i", &number_curt);
				
				negativeCheck = (people < 0 || number_dev < 0 || number_lamp < 0 || number_win < 0 || number_curt < 0);
				
				system("cls");
				
				if(negativeCheck)
				{
					printf("\nInvalid negative input\n Please insert only positive numbers\n\n");
				}
			}while(negativeCheck);

            /* C�lculo final North and Northeast of Brazil*/
            final_calculation = 600 + (people * 100) + (number_dev * 100) + (number_lamp * 70) + ((y_n_win == 'Y' || y_n_win == 'y') ? 0 : 50 * (number_win - number_curt));

            if(y_n_slab == 'Y') {
                printf("\nCapacity Needed BTUs per hour: %.2f", final_calculation);
            }
            else {
                system("cls");
                printf("Capacity Needed BTUs per hour: %.2f", final_calculation * (total_footage / 100));
            }

            printf("\nPress any key to return to menu...\n");
            getch();
        }
        else if(opp == 2) {
            system("cls");

            printf("Midwest, South and Southeast of Brazil\n");
            printf("\nOption 1 (Residential House) \nOption 2 (Commercial Apartment/Office)\nType the option number: ");
            scanf("%i", &h_a);
            printf("Have slab (Y/N)? ");
            scanf(" %c", &y_n_slab);
            y_n_slab = toupper(y_n_slab);

            if(y_n_slab == 'Y') {
                total_footage = 0.0;
            }
            else if(y_n_slab == 'N') {
            	do
				{
            		printf("What is the square footage (m2)? ");
                	scanf("%f", &footage);
                	
                	negativeCheck = (footage < 0);
                	
                	if(negativeCheck)
                	{
                		printf("\nInvalid negative input\n Please insert only positive numbers\n\n");
					}
				}while(negativeCheck);
                
                total_footage = footage;
            }
            else {
                printf("\nInvalid option for 'Have slab'.\n");
                printf("Press any key to return to menu...\n");
                getch();
                continue; /* Continue to the beginning of the infinite loop */
            }
			
			do
			{
				printf("Amount of people: ");
				scanf("%i", &people);
				printf("Inform number of electronic devices: ");
				scanf("%i", &number_dev);
				printf("Inform number of LED lamps: ");
				scanf("%i", &number_lamp);
				printf("Inform number of windows: ");
				scanf("%i", &number_win);
				printf("Inform number of blackout curtains: ");
				scanf("%i", &number_curt);
				
				negativeCheck = (people < 0 || number_dev < 0 || number_lamp < 0 || number_win < 0 || number_curt < 0);
				
				system("cls");
				
				if(negativeCheck)
				{
					printf("\nInvalid negative input\n Please insert only positive numbers\n\n");
				}
			}while(negativeCheck);

            /* C�lculo final Midwest, South and Southeast of Brazil*/
            final_calculation = 400 + (people * 100) + (number_dev * 100) + (number_lamp * 70) + ((y_n_win == 'Y' || y_n_win == 'y') ? 0 : 50 * (number_win - number_curt)); 

            if(y_n_slab == 'Y') {
                printf("Capacity Needed BTUs per hour: %.2f", final_calculation);
            }
            else {
                system("cls");
                printf("\nCapacity Needed BTUs per hour: %.2f", final_calculation * (total_footage / 100));
            }

            printf("\nPress any key to return to menu...\n");
            getch();
        }
        else if(opp == 0) {
            system("cls");

            printf("Operation finished...\n");
        }
        else {
            system("cls");

            printf("Invalid option.\n");
            printf("Press any key to return to menu...\n");
            getch();
        }
    }

    return 0;
}

/*Se a propriedade tiver uma laje, o resultado � exibido como est�. Se a propriedade n�o tiver uma laje, o resultado � multiplicado pela metragem quadrada total da propriedade dividida por 100.*/

/*What is a BTU?
The British Thermal Unit, or BTU, is an energy unit. It is approximately the energy needed to heat one pound of water by 1 degree Fahrenheit.
1 BTU = 1,055 joules, 252 calories, 0.293 watt-hours, or the energy released by burning one match. 1 watt is approximately 3.412 BTU per hour.
BTU is often used as a point of reference for comparing different fuels. Even though they're physical commodities and are quantified accordingly,
such as by volume or barrels, they can be converted to BTUs depending on the energy or heat content inherent in each quantity. BTU as a unit of
measurement is more useful than physical quantity because of fuel's intrinsic value as an energy source. This allows many different commodities
with intrinsic energy properties, such as natural gas and oil, to be compared and contrasted.
BTU can also be used pragmatically as a point of reference for the amount of heat that an appliance generates; the higher the BTU rating of an
appliance, the greater the heating capacity. As for air conditioning in homes, even though ACs are meant to cool homes, BTUs on the technical
label refer to how much heat the air conditioner can remove from their respective surrounding air. */

/*
int people, number_dev, number_lamp, number_win, number_curt, footage, total_footage;{

if(people, number_dev, number_lamp, number_win, number_curt, footage, total_footage >= 1)
    }else{
        people, number_dev, number_lamp, number_win, number_curt, footage, total_footage = -999;
    
    printf("\nOnly positive numbers, please press any key to return to menu...");
    getch();
    return opp;
}*/




/* #include <stdio.h>

int ler_numero_maior_que_1() {
    int num;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("Erro: numero invalido.\n");
        return ler_numero_maior_que_1();
    }
    return num;
}

int main() {
    int num_maior_que_1 = ler_numero_maior_que_1();
    printf("O numero digitado foi: %d\n", num_maior_que_1);
    return 0;
}*/