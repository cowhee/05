#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf("������ �Է��Ͻÿ�.:"); 
	scanf("%d", &n);
	 
	if(n>0){
		printf("%d�¾��\n", n);
	}
	else if(n==0){
		printf("%d��0\n", n);
	}
	else {
		printf("%d������\n", n);
	}
	return 0;
}
