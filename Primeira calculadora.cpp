#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float n1, n2, result;
    char sinal;
    
    printf("Digite 2 n�meros para serem calculados:\n");
    scanf("%f %f", &n1, &n2);
    
    printf("---Calculadora---\n");
    printf("+ soma\n");
    printf("- subtra��o\n");
    printf("* multiploca��o\n");
    printf("/ divis�o\n");
    scanf(" %c", &sinal);
    
    switch(sinal){
    	case '+':
    		result = n1+n2;
    		printf("A soma � = %.1f\n", result);
    	break;
    	case '-':
    		result = n1-n2;
    		printf("A subtra��o � = %.1f\n", result);
    	break;
    	case '*':
    		result = n1*n2;
    		printf("A multiplica��o � = %.1f\n", result);
    	break;
    	case '/':
    		printf("A divis�o � = %.1f\n", result);
    	break;
    	default:
    		printf("Op��o inv�lida!\n");
    	break;
	}



    return 0;
}


