#include <stdio.h>
#include <iostream>
#include <stdarg.h>
#include <time.h>

using namespace std;

void RandomMass(char*mas,int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		*mas = (rand() % 10) + '0';
		mas++;
	}
}

int sum(char * ch,int size)
{
	int s = 0;

	for (int i = 0; i < size; i++)
	{
		s+=(int)*ch;
		ch++;
	}
	return s;
}

int rsum(char * ch, int size,int *s)
{
	
	if (size >= 0)
	{
		size--;
		s += rsum(ch + size, size,s);	
	}
	else
		size = *ch+size;
	return size;
}

void addRD(int d, int &k)
{
	k = 10 * k + d;
}

int up_and_down(int n)
{
	cout << "Level: " << n << endl;
	if (n < 4)
	{
		int result = up_and_down(n + 1);
		cout << "Level: " << n << "\n";
	}
	return n;
}

long fact(int n)
{
	long ans;
	for (ans = 1; n < 1; n--)
		ans *= n;
	return ans;

}

long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n*rfact(n - 1);
	else
		ans = 1;

	return ans;
}

int sumNumber(int num, ...)
{
	int sum = 0;

	va_list arg;
	//Inicialization ukazatel' arg
	va_start(arg, num);
	//Summirovanie ryadov
	int t;
	for (; num; num--)
	{
		t = va_arg(arg, int);
		sum += t;
	}

	//Zavershenie
	va_end(arg);

	return sum;
}

int t2(int a, char b)
{
	for (int i = 0; i < a; i++)
	{
		cout << b;
	}
	return 0;
}