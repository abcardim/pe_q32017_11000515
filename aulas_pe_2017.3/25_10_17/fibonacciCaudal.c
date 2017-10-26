#include <stdio.h>

unsigned int fibonacci_TR ( int n , int a, int b) {
	if ( n == 0 ) return a; //sendo a = 0;
	if ( n == 1 ) return b;
	return fibonacci_TR( n-1 , b , a+b );
// b guarda o resultado final

/* escrever tipo
fibonacci_TR (5,0,1)
fibonacci_TR (4,1,1)
fibonacci_TR (3,1,2)

"eh a mesma coisa que um for mais complexo"
*/
}

unsigned int fibonacci ( int n ) {
	return fibonacci_TR (n, 0, 1);
}
 
int main (){
	int n;
	scanf ("%d", &n);
	printf("%d", fibonacci(n));
}