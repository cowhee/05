#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("정수를 입력하시오\n");
	scanf("%d", &n);
	
	if(n>0){
		printf("양수입니다.");
	}
    else if(n==0){
		printf("0입니다.");
	}
	else{
		printf("음수입니다.");
	}
	return 0;
}
