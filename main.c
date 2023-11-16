#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
	char *pc;
	int *pi;
	double *pd;
	
	pc=(char*)10000;     // three is pointing same address 
	pi=(int*)10000;
	pd=(double*)10000;
	
	printf("before increase : pc=%p, pi=%p,pd=%p\n",pc,pi,pd);
	
	pc++;
	pi++;
	pd++;
	printf("after increase : pc=%p,pi=%p,pd=%p\n",pc,pi,pd);// char: 1++, int: 4++, double: 8++
	system("PAUSE");
	return 0;
}
	

