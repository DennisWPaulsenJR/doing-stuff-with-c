#include <stdio.h>


void checkDoubles(){
 	
	double aNumber = -10.25;
	if (aNumber > 0 && aNumber < 1){
		printf("%f is only fractional.\n", aNumber);
	}
	else if (aNumber < 0 && aNumber > -1)
	{
		printf("%f is only fractional.\n", aNumber);
	}
	else{
		printf("%f has a whole number component.\n", aNumber);
	}
}

int main(){
	checkDoubles();
	return 0;
}