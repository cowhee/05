#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf("정수를 입력하시오.:"); 
	scanf("%d", &n);
	 
	if(n>0){
		printf("%d는양수\n", n);
	}
	else if(n==0){
		printf("%d는0\n", n);
	}
	else {
		printf("%d는음수\n", n);
	}
	return 0;
}
