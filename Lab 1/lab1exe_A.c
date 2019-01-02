#include <stdio.h>

int main(void){
	int a = 0, b = 0;
	printf("please enter a value for variable a:\n");
	scanf("%d",&a);
	printf("please enter a value for variable b:\n");
	scanf("%d",&b);
	printf("The values of a and b are %d for a and %d for b.\n",a,b);
	printf("the value of a %% b is %d.\n",a%b);
	return 0;
}
