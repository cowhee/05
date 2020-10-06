#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int n;
    
    printf("정수 하나를 입력하시오.\n");
    scanf("%d", &n);
    
    if(n<0)
        n=n*(-1);
    	printf("절대값은 %d입니다.\n", n);
	
	
	return 0;
}
