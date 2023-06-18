#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>

int main()
{
  
    char opp = -1; 
    int people, number_dev, number_lamp, number_win, number_curt; 
    int h_a; 
    char y_n_slab, y_n_win; 
    float footage, total_footage; 
    float final_calculation; 
    bool negativeCheck = 0;


    while(opp != 0) {
        system("cls");
		
	printf("-------------------------------------------------------------------\n");
        printf("-Air Conditioner System (British Thermal Unit - A/C BTU Calculaor)-\n"); 
        printf("\n-1 - Option 1 (North and Northeast of Brazil)                     -"); 
        printf("\n-2 - Option 2 (Midwest, South and Southeast of Brazil)            -");
        printf("\n-0 - Exit                                                         -\n");
        printf("-------------------------------------------------------------------\n");
        printf("\nInform Option: ");
        scanf("%i", &opp);

        if(opp == 1) {
            system("cls");

            printf("North and Northeast of Brazil\n");
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
                continue;
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

            final_calculation = 600 + (people * 100) + (number_dev * 100) + (number_lamp * 70) + ((toupper(y_n_win) == 'Y') ? 0 : 50 * (number_win - number_curt));

            if(y_n_slab == 'Y') {
                printf("\nCapacity Needed BTUs per hour: %.0f", final_calculation * 10);
            }
            else {
                system("cls");
                printf("Capacity Needed BTUs per hour: %.0f", final_calculation * (total_footage / 10));
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
                continue;
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

            final_calculation = 400 + (people * 100) + (number_dev * 100) + (number_lamp * 70) + ((toupper(y_n_win) == 'Y') ? 0 : 50 * (number_win - number_curt)); 

            if(y_n_slab == 'Y') {
                printf("Capacity Needed BTUs per hour: %.0f", final_calculation * 10);
            }
            else {
                system("cls");
                printf("\nCapacity Needed BTUs per hour: %.0f", final_calculation * (total_footage / 10));
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

