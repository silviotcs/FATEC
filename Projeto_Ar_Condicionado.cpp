#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int opp;
    int people, amount_people, numb_dev, numb_lamp, numb_win, numb_curt;
    int h_a;
    int y_n, y_n_slab, y_n_win;
    float footage, total_footage, total_footage_1, total_footage_2;
    float final_calculation, final_calculation_1, final_calculation_2, final_calculation_3, final_calculation_4;


    while(opp != 0){
    system("cls");

    printf("Air-conditioning System\n");

    printf("\n1 - Option 1 (North and Northeast)");
    printf("\n2 - Option 2 (Midwest, South and Southeast)");
    printf("\n0 - Exit\n");

    printf("\nInform Option: ");
    scanf("%i",&opp);

    if (opp == 1){
        system("cls");

        printf("North and Northeast\n");
        printf("\nOption 3 (House) - Option 4 (Apartment): ");
        scanf("%i", &h_a);
        printf("Have slab (option 5 (Y) - option 6 (N))?  ");
        scanf("%i", &y_n_slab);

        if(y_n_slab == 5){
            total_footage_1;
        }
        if(y_n_slab == 6) {
            total_footage_2;
        }

        printf("Inform footage (m2): ");
        scanf("%f", &footage);
        printf("Amount of people: ");
        scanf("%i", &people);
        printf("Inform number of eletronic devices: ");
        scanf("%i", &numb_dev);
        printf("Inform number of lamps: ");
        scanf("%i", &numb_lamp);
        printf("Inform number of windows: ");
        scanf("%i", &numb_win);
        printf("Inform number of curtains: ");
        scanf("%i", &numb_curt);


        final_calculation_1 = 300 + (amount_people * 100) + (numb_dev * 100) + (numb_lamp * 70) + ((numb_win - numb_curt) * 50) + 600;
        final_calculation_2 = 300 + (amount_people * 100) + (numb_dev * 100) + (numb_lamp * 70) + ((numb_win - numb_curt) * 50) + 700;

        if (y_n_slab == 5) {
            printf("BTUS: %f", final_calculation_1);
            getch ();
        }
        if (y_n_slab == 6) {
            printf("BTUS: %f", final_calculation_2);
            getch ();
        }
    }

    if (opp == 2){
        system("cls");
        printf("Midwest, South and Southeast\n");
        printf("\nOption 3 (House) - Option 4 (Apartment): ");
        scanf("%i", &h_a);
         printf("Have slab (option 5 (Y) - option 6 (N))?  ");
        scanf("%i", &y_n_slab);

        if(y_n_slab == 5){
            total_footage_1;
        }
        if(y_n_slab == 6) {
            total_footage_2;
        }
        printf("Inform footage (m2): ");
        scanf("%f", &footage);
        printf("Amount of people: ");
        scanf("%i", &people);
        printf("Inform number of eletronic devices: ");
        scanf("%i", &numb_dev);
        printf("Inform number of lamps: ");
        scanf("%i", &numb_lamp);
        printf("Inform number of windows: ");
        scanf("%i", &numb_win);
        printf("Inform number of curtains: ");
        scanf("%i", &numb_curt);


        final_calculation_3 = 200 + (amount_people * 100) + (numb_dev * 100) + (numb_lamp * 70) + ((numb_win - numb_curt) * 50) + 600;
        final_calculation_4 = 200 + (amount_people * 100) + (numb_dev * 100) + (numb_lamp * 70) + ((numb_win - numb_curt) * 50) + 700;


        if (y_n_slab == 5) {
            printf("BTUS: %f", final_calculation_3);
            getch ();
        }
        if (y_n_slab == 6) {
            printf("BTUS: %f", final_calculation_4);
            getch ();
        }
    }

    if(opp < 0 || opp > 2){
        printf("\nOPCAO INVALIDA - APERTE QUALQUER TECLA PARA VOLTAR AO MENU\n");
        getch ();
    }
    }

    return 0;
}
