#include "myMath.h"
#define e 2.71828

double Exponent(int x){
	float Score;
	if(x==0)return 1;
	if(x==1)return e;
	Score=e;
	for(int i=1;i<x;i++){
		Score=Score*e;
	}
	return Score;
}
	
	
double Power(double x , int y){
	if(x==0)return x;
	if(y==0)return 1;
	double Score=x;
	for(int i=1;i<y;i++){
		Score=Score*x;
	}
	return Score;
}