# include <stdio.h>

int main (){
    int horas = 0, minutos = 0;
    puts("Escriba la hora em formato de 24 horas HH MM");
    scanf("%d %d", &horas, &minutos);
    if(horas == 0){
        horas = 12;
        printf("%d", horas);
        printf(":%d", minutos);
        printf(" AM\n");
    }else if(horas > 12){
        horas = horas - 12;
        printf("%d", horas);
        printf(":%d", minutos);
        printf(" PM\n");
    }else if(horas == 12){
        printf("%d", horas);
        printf(":%d", minutos);
        printf(" PM\n");
    }else{
        printf("%d", horas);
        printf(":%d", minutos);
        printf(" AM\n");
    }
    return 0;
}