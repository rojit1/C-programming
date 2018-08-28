#include<stdio.h>
main(){
	int x,y,sum,substract,multiply,modulos,divide;
	x=50;
	y=5;
	sum=x+y;
	substract=x-y;
	multiply=x*y;
	modulos=x%y;
	divide=x/y;
	
	printf("The sum of %d and %d is %d\n",x,y,sum);
	printf("The substraction of %d from %d is %d\n",y,x,substract);
	printf("The multipication of %d and %d is %d\n",x,y,multiply);
	
	// modulos gives remainder 
	printf("The remainder is %d\n",modulos);
	
	printf("The division of %d from %d is %d\n",x,y,divide);
}
