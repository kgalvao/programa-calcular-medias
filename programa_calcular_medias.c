#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void menu();
float mediaGeometrica(int,int,int);
int main(){
    int a,b,c;
    char opcao;
    printf("-------------PROGRAMA PARA CALCULAR MEDIA---------------\n");
    do {
         menu();
         scanf(" %c",&opcao);

         switch (opcao){

            case'a':
            case'A':
                printf("Media Aritmetica selecionada. \n");
                break;

            case'g':
            case'G':
                printf("Media Geometrica selecionada. \n");
                printf("Digite tres numeros inteiros: \n");
                scanf("%d %d %d",&a, &b,&c);
                printf("A media geometrica: %.2f", mediaGeometrica(a,b,c));
                break;

            case'h':
            case'H':
                printf("Media Harmonica selecionada. \n");
                break;

            case'p':
            case'P':
                printf("Media Ponderada selecionada. \n");
                break;
            default:
                printf("Opcao invalida \n");
        }
         system("pause");
        system("cls");

    }while(opcao!='s' && opcao!='S');
}
 void menu(){

    printf("\n [a]Aritmetica\n [g]Geometrica\n [h]Harmonica\n [p]Ponderada\n [s]Sair\n Digite opcao desejada:\n");

 }
float mediaGeometrica(int a,int b,int c){
    float media;
    media=cbrt(a*b*c);
    return media;
}
