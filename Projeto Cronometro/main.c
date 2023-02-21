#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include  <windows.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    SetConsoleTitle("Cronometro");

    int sec=0;
    int min=0;
    int hr=0;

    int i=0;

    do{
        system("cls");
        printf("Cronometro\n\n");

       printf("\n\t\t\t\t%dh:%dm:%ds\n\n", hr,min,sec);

        if(sec==60){
            sec=0;
            min++;
            }
            if(min==60){
                min=60;
                min++;
            }
            if(hr==60){
                hr=60;
                hr++;
            }
            Sleep(1000);
            sec++;
    }while(i==0);
    system("pause");


    return 0;
}
