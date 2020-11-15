#include "myMath.h"


float add(float x, float y){
	return x+y;
}
  
float sub(float x , float y){
	return x-y;
}

double mul(double x , int y){
	if(y==0)return 1;
	if(x==0)return 0;
	double score=x;
	int i=0;
	for(i=1;i<y;i++){
	score = score+x;
	}
	return score;
}

double div(double x, int y){
	if(x==0)return 0;
	if(y==0)return -1;
	double score=0;
	score=(double)x/y;
	return score;
}
