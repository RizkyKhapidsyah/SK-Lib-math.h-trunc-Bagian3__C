#include <stdio.h>
#include <math.h>	
#include <conio.h>

int main() {
	float x1 = 2.0, x2 = 3.9, x3 = -3.3, x4 = 4.9;

	printf(" Truncated value is %f \n", truncf(x1));
	printf(" Truncated value is %f \n", truncf(x2));

	printf(" Truncated value is %f \n", truncf(x3));
	printf(" Truncated value is %f \n", truncf(x4));

	_getch();
	return 0;
}
