#include<stdio.h>

const char * mes1 = "Hello";
const char * mes2 = "World";
const char * mes3 = "Heyo";
int a =20, b=500;
int main()
{
	int c;
	int * aa, bb, cc;
	char d, e, f, dd[64], ee[64], ff[64];
	const char ** ddd, ** eee, ** fff;
	long long g, h, i, gg, hh, ii;
	d = a;
	b = a + d;
	c = b + d - a;
	g = a*b;
	h = g + c;
	i = g*h;
	aa = &a;
	ddd = &mes1;
	eee = &mes2;
	fff = &mes3;
	return 0;
}
