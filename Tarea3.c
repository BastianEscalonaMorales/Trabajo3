#include <stdio.h>
int main(){
	int a=3,b=5,c=0,d=0,resultado=0;
	d=++a;
	c=--b;
	d=d+2;
	c=c-2;
	d=d+3;
	c=c-1;
	d=d-1;
	resultado = (d*4)/(c*2);

	printf("%d\n",resultado);

	return 0;
}