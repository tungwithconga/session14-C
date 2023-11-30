#include <stdio.h>
int main (){
	int point = 30;
	int *pointer = &point;
	printf ("Gia tri cua bien la %d va dia chi cua bien la %d",*pointer,pointer);
}

