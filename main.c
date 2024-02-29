#include <stdio.h>
#include <stdlib.h>

void soma();

int main(int argc, char *argv[]) {
	
	soma();
	
	return 0;
}

void soma(){
	float x, y;
	int i;
	printf("Digite o numero dejesado: ");
	scanf("%f", &y);
	
	for (i = 1; i<=10; i++){
		
		x+=i;
		
		printf("a soma e de %.0f + %.2d: %.2f\n", y, i, x);
		
		x = y;
		
	}
	
	
}
