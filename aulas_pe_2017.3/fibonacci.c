#include <stdio.h>

unsigned int fibonacci ( int n ) {
	if (n<2) { // igual a if (n<2)( n==0 || n==1 )
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n - 2);

}
 
int main (){
	int n;
	scanf ("%d", &n);
	printf("%d", fibonacci(n));
}