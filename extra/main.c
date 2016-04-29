#include<stdio.h>

int main() {
	int sum = mysum(3, 2, 4, 1);
	float fsum = myfsum(3, 2.0, 4.0, 6.0);
	printf("My int sum: %d\n", sum);
	printf("My float sum: %f\n", fsum);
	
	return 0;

}
