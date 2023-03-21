#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int opp = -1; // Initialize opp to -1 to enter the loop
    int people, numb_dev, numb_lamp, numb_win, numb_curt;
    int h_a;
    char y_n_slab, y_n_win;
    float footage, total_footage;
    float final_calculation;

    while(opp != 0) {
        system("cls");

        printf("Air-conditioning System\n");
        printf("\n1 - Option 1 (North and Northeast)");
        printf("\n2 - Option 2 (Midwest, South and Southeast)");
        printf("\n0 - Exit\n");
        printf("\nInform Option: ");
        scanf("%i", &opp);

        if(opp == 1) {
            system("cls");

            printf("North and Northeast\n");
            printf("\nOption 3 (House) - Option 4 (Apartment): ");
            scanf("%i", &h_a);
            printf("Have slab (Y/N)? ");
            scanf(" %c", &y_n_slab);

            if(y_n_slab == 'Y' || y_n_slab == 'y') {
                total_footage = 0.0;
            }
            else if(y_n_slab == 'N' || y_n_slab == 'n') {
                printf("Inform footage (m2): ");
                scanf("%f", &footage);
                total_footage = footage;
            }
            else {
                printf("\nInvalid option for 'Have slab'.\n");
                printf("Press any key to return to menu...");
                getch();
                continue; // Continue to the beginning of the loop
            }

            printf("Amount of people: ");
            scanf("%i", &people);
            printf("Inform number of electronic devices: ");
            scanf("%i", &numb_dev);
            printf("Inform number of lamps: ");
            scanf("%i", &numb_lamp);
            printf("Inform number of windows: ");
            scanf(" %c", &y_n_win);
            printf("Inform number of curtains: ");
            scanf("%i", &numb_curt);

            final_calculation = 600 + (people * 100) + (numb_dev * 100) + (numb_lamp * 70) + ((y_n_win == 'Y' || y_n_win == 'y') ? 0 : 50 * (numb_win - numb_curt));

            if(y_n_slab == 'Y' || y_n_slab == 'y') {
                printf("BTUs: %.2f", final_calculation);
            }
            else {
                printf("BTUs: %.2f", final_calculation * (total_footage / 100));
            }

            printf("\nPress any key to return to menu...");
            getch();
        }
        else if(opp == 2) {
            system("cls");

            printf("Midwest, South and Southeast\n");
            printf("\nOption 3 (House) - Option 4 (Apartment): ");
            scanf("%i", &h_a);
            printf("Have slab (Y/N)? ");
            scanf(" %c", &y_n_slab);

            if(y_n_slab == 'Y' || y_n_slab == 'y') {
                total_footage = 0.0;
            }
            else if(y_n_slab == 'N' || y_n_slab == 'n') {
                printf("Inform footage (m2): ");
                scanf("%f", &footage);
                total_footage = footage;
            }
            else {
                printf("\nInvalid option for 'Have slab'.\n");
                printf("Press any key to return to menu...");
                getch();
                continue; // Continue to the beginning of the loop
            }

            printf("Amount of people: ");
            scanf("%i", &people);
            printf("Inform number of electronic devices: ");
            scanf("%i", &numb_dev);
            printf("Inform number of lamps: ");
            scanf("%i", &numb_lamp);
            printf("Inform number of windows: ");
            scanf(" %c", &y_n_win);
            printf("Inform number of curtains: ");
            scanf("%i", &numb_curt);

            final_calculation = 600 + (people * 100) + (numb_dev * 100) + (numb_lamp * 70) + ((y_n_win == 'Y' || y_n_win == 'y') ? 0 : 50 * (numb_win - numb_curt));

            if(y_n_slab == 'Y' || y_n_slab == 'y') {
                printf("BTUs: %.2f", final_calculation);
            }
            else {
                printf("BTUs: %.2f", final_calculation * (total_footage / 100));
            }

            printf("\nPress any key to return to menu...");
            getch();
        }
        else if(opp == 0) {
            system("cls");

            printf("Exiting...\n");
        }
        else {
            system("cls");

            printf("Invalid option.\n");
            printf("Press any key to return to menu...");
            getch();
        }
    }

    return 0;
}

