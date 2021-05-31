#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void other()
{
	int x = 18;
	isalnum(x);
	isalpha(x);
	isdigit(x);
	isgraph(x);
	islower(x);
	isspace(x);
	toupper(x);
	tolower(x);
	toascii(x);
}

void math()
{
	double a=28;
	double b=32;
	sqrt(a);
	ceil(a);
	floor(b);
	log(a);
	cos(b);
	exp(b);
	fabs(a);
	y0(a);
	y1(b);
	tan(a);
	tanh(a);
	sin(b);
	
	
}
int main()
{
	char * buf1 = "tekst1";
	char * buf2 = "tekst2";
	strlen(buf1);
	strcmp(buf1, buf2);
	puts(buf1);
	rand();
	//other();
	//math();
	return 0;
}
