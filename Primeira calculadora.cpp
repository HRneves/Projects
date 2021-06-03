#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float n1, n2, result;
    char sinal;
    
    printf("Digite 2 números para serem calculados:\n");
    scanf("%f %f", &n1, &n2);
    
    printf("---Calculadora---\n");
    printf("+ soma\n");
    printf("- subtração\n");
    printf("* multiplocação\n");
    printf("/ divisão\n");
    scanf(" %c", &sinal);
    
    switch(sinal){
    	case '+':
    		result = n1+n2;
    		printf("A soma é = %.1f\n", result);
    	break;
    	case '-':
    		result = n1-n2;
    		printf("A subtração é = %.1f\n", result);
    	break;
    	case '*':
    		result = n1*n2;
    		printf("A multiplicação é = %.1f\n", result);
    	break;
    	case '/':
    		printf("A divisão é = %.1f\n", result);
    	break;
    	default:
    		printf("Opção inválida!\n");
    	break;
	}



    return 0;
}


