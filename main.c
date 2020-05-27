// Program Calculator

#include <stdio.h>

int main(){
    
    int operand1,operand2,ergebnis;
    char operator;
    
    printf("Programm Taschenrechner \n");
    
    printf("Bitte geben Sie einen Operator ein: \n");
    
    printf("+ für die Addition \n");
    printf("- für die Subtraktion \n");
    printf("* für die Multiplikation \n");
    printf("/ für die Division \n");
    printf("E für Ende \n ");
    scanf("%c",&operator);
    fflush(stdin);
    
    
    

    switch(operator){
        case '+' : printf("Operator + \n");
            printf("Bitte geben Sie den 1. Operanden ein: \n");
            scanf("%i",&operand1);
            fflush(stdin);
            printf("Bitte geben Soie den 2. Operanden ein: \n");
            scanf("%i",&operand2);
            fflush(stdin);
            ergebnis = operand1 + operand2;
            break;
        case '-' : printf("Operator - \n");
            printf("Bitte geben Sie den 1. Operanden ein: \n");
            scanf("%i",&operand1);
            fflush(stdin);
            printf("Bitte geben Soie den 2. Operanden ein: \n");
            scanf("%i",&operand2);
            fflush(stdin);
            ergebnis = operand1 - operand2;
            break;
        case '*' : printf("Operator * \n");
            printf("Bitte geben Sie den 1. Operanden ein: \n");
            scanf("%i",&operand1);
            fflush(stdin);
            printf("Bitte geben Soie den 2. Operanden ein: \n");
            scanf("%i",&operand2);
            fflush(stdin);
            ergebnis = operand1 * operand2;
            break;
        case '/' : printf("Operator / \n");
            printf("Bitte geben Sie den 1. Operanden ein: \n");
            scanf("%i",&operand1);
            fflush(stdin);
            printf("Bitte geben Soie den 2. Operanden ein: \n");
            scanf("%i",&operand2);
            fflush(stdin);
            ergebnis = operand1 / operand2;
            break;
        case 'E' : printf("Ende \n");
            break;
            
    }
    
    printf("Das Ergebnis lautet %i %c %i = %i",operand1,operator,operand2,ergebnis);
    
    
    return 0;
    
    
}
