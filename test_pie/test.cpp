#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <chrono>
#include <iostream>

using std::chrono::duration_cast;
using std::chrono::nanoseconds;
using std::chrono::steady_clock;
using time_point = steady_clock::time_point;

void f1()
{
	int result;

	char original[500];
	char newcopy[500];

	for (int i = 0; i++; i < 500) {
		original[i] = 'A';
	}

	memcpy(newcopy, original, 500);
}

void f2()
{
	int result;

	char original[500];
	char newcopy[500];

	for (int i = 0; i++; i < 500) {
		original[i] = 'A';
	}

	memcpy(newcopy, original, 500);
}

void f3()
{
	int result;

	char original[500];
	char newcopy[500];

	for (int i = 0; i++; i < 500) {
		original[i] = 'A';
	}

	memcpy(newcopy, original, 500);
}

void f4()
{
	int result;

	char original[500];
	char newcopy[500];

	for (int i = 0; i++; i < 500) {
		original[i] = 'A';
	}

	memcpy(newcopy, original, 500);
}
void f5()
{
	int result;
}
void f6()
{
	int result;
}
void f7()
{
	int result;
}
int main()
{
	time_point begin, end;
	begin = steady_clock::now();

	for (int i = 0; i < 5; i++) {
		f1();
		f2();
		f3();
		f4();
		f5();
		f6();
		f7();
	}
	end = steady_clock::now();
	std::ostream &stream = std::cout;
	stream << duration_cast<nanoseconds>(end - begin).count() << "[ns]\n";
	return 0;
}
