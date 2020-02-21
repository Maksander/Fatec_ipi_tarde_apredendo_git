#include <stdio.h>

int main(){
    char op;
    int operando1,operando2;
    int resultado;
    printf("Qual operação realizar?\n");
    scanf ("%c", &op);  // & operador de extração de endereço
    printf("Qual o primeiro operando\n");
    scanf ("%d", &operando1);
    printf("Qual o segundo operando\n");
    scanf ("%d", &operando2);
    switch (op){
        case '+':
            printf ("%d + %d = %d\n", operando1,operando2,operando1+operando2);
            break;
        case '-':
            printf ("%d - %d = %d\n", operando1,operando2,operando1-operando2);
            break;
        case '*':
            printf ("%d * %d = %d\n", operando1,operando2,operando1*operando2);
            break;
        case '/':
            printf ("%d / %d = %d\n", operando1,operando2,operando1/operando2);
            break;
    }
    return 0;
}