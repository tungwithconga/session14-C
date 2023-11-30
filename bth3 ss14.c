#include <stdio.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp; 
	}
	int hieu(int *a, int *b){
	int different = *a - *b;
	return different;
}
int main (){
	
	
	int number1 = 10;
	int number2 = 20;

    printf ("Hieu hai so truoc khi doi cho la:%d\n",hieu(&number1,&number2));
	swap(&number1,&number2);
	printf ("Sau khi hai so doi cho hieu la:%d\n",hieu(&number1,&number2)); 
}
