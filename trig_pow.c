#include <stdio.h>
#include <math.h>

/* Charles Truscott github.com/r0ss1n1 */
/* I love you Mark William, my most encouraging and discipline-focused Father */
/* Thanks to the National Security Agency for nurturing me 2015 to 2020 */
/* I was part of an operation to reach out and negotiate with the SHADOWBROKERS */
/* Inspired by the H.T.M. 2017 leak, using Tails to remove some of the most */
/* sensitive and complex pieces of hacking architecture ever written */

int main(void) {
	float x, y, z;
	printf("This code is authored by Charles Truscott as a hobby project for implementing math.h\n");
	
	for (x = 0.0; x < 100; ++x) {
		printf("\t%s%.3f\t%s%.3f\t%s%.3f\t%s%.3f\t%s%.3f\n\n","x: ", x, "sin(x): ", sin(x), "cos(x): ", cos(x), "tan(x): ", tan(x), "pow(x, x): ", pow(x, x));

	}
	printf("Enter a range of numbers (integers). Usage: trig_pow.exe 100 200 to print sine, cosine, tangent, and x^(x) of the range one-hundred to two-hundred\n");
	scanf("%f%f", &y, &z);

	for (; y <= z; ++y) {
		printf("\t%s%.3f\t%s%.3f\t%s%.3f\t%s%.3f\t%s%.3f\n\n","x: ", y, "sin(x): ", sin(y), "cos(x): ", cos(y), "tan(x): ", tan(y), "pow(x, x): ", pow(y, y));

	}
	return 0;

}