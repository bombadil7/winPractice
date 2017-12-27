#include <stdio.h>

	void change(int a, int b, int *c);

int main(void) {
	int a = 2, b = 3, c=0;
	
	printf("a = %d, b = %d, c = %d\n", 
			a, b, c);
	change(a, b, &c);
	printf("a = %d, b = %d, c = %d\n", 
			a, b, c);
	return 0;
}

	void change(int a, int b, int *c){
		*c = a + b;
	}

