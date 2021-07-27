#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int i, tab, result;
    
    printf("Qual tabuada quer calcular?\n");
    scanf("%d", &tab);
    printf("\n---Tabuada do %d----\n\n", tab);
    
    for(i=1; i<=10; i++){
    	result = i*tab;
    	printf("%d x %d = %d\n", i, tab, result);
	}



    return 0;
}


