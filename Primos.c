# include <stdio.h>

int main(){
    int n, cantidad = 1, num = 2;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    while(cantidad <= n){
        int primo = 1;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            printf("%d\n", num);
            cantidad++;
        }
        num++;
    }
    return 0;
}