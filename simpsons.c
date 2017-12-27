/* This code demonstrates the use of function pointers.
 * Function integral approximates the integral of a function
 * it received as a pointer argument using Simpson's Rule. 
 * The quality of this approximation improves as the number
 * of strips increases.
 */
#include <stdio.h>

#define NSTRIPS 46

double integral(double a, double b, double (*f)(double)){
	int n;
	double h = (b - a) / NSTRIPS;
	double sum = 0;

	/* Add first and last terms */
	sum += (*f)(a) + (*f)(b);

	/* Add inner terms.  Odd multiplied by 4, even by 2 */
	for (n = 1; n < NSTRIPS - 1; ++n){
		if ( n % 2 != 0)
			sum += 4 * (*f)(a + h*n);
		else
			sum += 2 * (*f)(a + h*n);

	}
	sum *= h / 3;
	return sum;
}

/* General line function */
double line(double k, double x, double b){
	return k * x + b;
}

/* A line with set k and b values */
double myLine(double x){
	double k = 3;
	double b = 2;

	return line (k, x, b);
}

/* Function that calculates 5x^2 + 3x - 14  */
double binom(double x){
	return 5*x*x + 3*x - 14;
}


int main(void) {
	double a = 2, b = 3;

	printf("Function integrated from %lf to %lf gives: %lf\n",
		a, b, integral(a, b, binom));
	return 0;
}

