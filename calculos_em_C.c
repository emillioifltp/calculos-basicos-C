#include <stdio.h>

int num1;
int num2;

int main(){
    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);
    
    int soma = (num1 + num2);
    int subt;
    int multp = (num1 * num2);
    float dvs = (num1 / num2);
    float resto = (num1 % num2);

    
    if (num1 > num2){
        subt = (num1 - num2);
    } else {
            subt = (num2 - num1);
    } 
    printf("A soma dos dois numeros e %d \na subtracao e %d \na multiplicacao e %d \na divisao e %.1f \no resto e %.1f",
         soma, subt, multp,dvs,resto);
    return 0;
}

