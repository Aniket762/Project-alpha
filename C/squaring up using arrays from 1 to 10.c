//Squaring up the values of no.s from 1 to 10
#include<stdio.h>
int main(void){
	int array_values[10]={0,1,4,9,16};
	int x;
	for(x=5;x<10;++x)
	array_values[x]=x*x;
	for(x=0;x<10;++x){
		printf("array_values[%d]=%d\n",x,array_values[x]);
	}
	return 0;
}
