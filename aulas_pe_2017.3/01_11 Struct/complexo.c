#include <stdio.h>

/* Criar funcoes para trabalhar com numeros complexos, e tambem imprimir */

typedef struct complexo {
	float real;
	float imaginaria;
} complexo;

complexo adicionreal_complexo (complexo x, complexo y )
{
	complexo z;
	z.real = x.real+y.real;
	z.imaginaria = x.imaginaria+y.imaginaria;
	return z;
}

complexo multi_complexo ( complexo x, complexo y )
{
	complexo z;
	z.real = x.real*y.real;
	z.imaginaria = x.imaginaria*y.imaginaria;
	return z;
}

void print_complexo ( complexo x )
{
	if (x.imaginaria > 0){
		printf("%lf + i%lf", x.real, x.imaginaria);
	} else if (x.imaginaria == 0) {
		prinf("%lf\n", x.real);
	}else {
		printf("%lf - i%lf\n", x.real, -x.imaginaria);
	}
}
