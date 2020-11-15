#include <stdio.h>
#include "myMath.h"


int main(){
	float a,b,c;
	double x,score=0;
	int temp;
	printf("Please insert a real number:");

	//First function
	scanf("%lf", &x);
	temp=(int)x;
	a=(float)Exponent(temp);
	b=(float)Power(x,3);
	c=-2;
	score=(double)add((float)score , a);
	score=(double)add((float)score , b);
	score=(double)add((float)score , c);
	printf("The value of f(x)=e^x+x^3-2 at the point %.4f is: %.4lf\n",x,score);

	//The second function
	a=Power(x,2);
	a=mul(a,2);
	b=mul(x,3);
	score=add(a,b);
	printf("The value of f(x)=3x+2x^2 at the point %.4f is: %.4lf\n",x,score);
	
	//Third function
	double i=0,j=0,k=0;
	i=Power(x,3);
	j=mul(i,4);
	i=mul(2,x);
	k=5-(2*x);
	if(k==0){
	printf("Number divided by 0 is undefined");
	}
	if(k!=0){
	score=div(j,k);
	printf("The value of f(x)=(4x^3)/5-2x at the point %.4f is: %.4lf\n",x,score);
	}
	return 1;
}