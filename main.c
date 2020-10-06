#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int n;
    
    printf("input a number ");
    scanf("%d", &n);
    
    int i, sum;
    for( i = 1, sum=0; i<=n; sum+=i, i++);
	
	printf("the result is %d\n", sum);
	
	return 0;
}
