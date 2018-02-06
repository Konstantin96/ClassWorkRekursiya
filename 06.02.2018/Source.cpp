#include <stdio.h>
#include <iostream>
#include <stdarg.h>
#include "Header.h"

using namespace std;

void main()
{

#pragma region k-chislu-prilep-chislo

	/*int k, d;
	cout << "k: ";
	cin >> k;

	for (int i = 0; i < 2; i++)
	{
		while (1)
		{
			cout << "d: ";
			cin >> d;
			if (d >= 0 && d <= 9)
			{
				addRD(d, k);
				break;
			}
			else
			{
				cout << " !!! " << endl;
			}
		}
		cout << "k = " << k << endl;
	}*/

#pragma endregion

#pragma region Vivod-simvolov

	/*t2(20);
	cout << endl;*/

#pragma endregion

	// va_list name
	//va_start()
	//va_end()
	//va_copy()
#pragma region Otsutstvie-argumentov-i-neopred-argumenty

	/*int sum = sumNumber(9, 1, 2, 1, 1, 1, 1, 4, 3, 2);
	cout << sum << endl;*/

#pragma endregion

#pragma region Rekursiya

	int num;
	while (scanf("%d",&num)==1)
	{
		if (num < 0)
		{
			cout << "Please do not enter  - number" << endl;
		}
		else if (num > 12)
		{
			cout << "The input type mast be less 13" << endl;
		}
		else
		{
			long result = fact(num);
			cout << "num = " << num << " result = " << result << endl;

			long resultR = rfact(num);
			cout << "num = " << num << " result = " << resultR << endl;
		}
	}
	cout << endl;

#pragma endregion

#pragma region zadanie-1

	/*11.	Написать рекурсивную функцию:
a.	вычисления суммы цифр натурального числа;
b.	вычисления количества цифр натурального числа.
*/
	char ch[5];
	int s=0;
	RandomMass(ch, 5);
	s = rsum(ch, 5, &s);


#pragma endregion

}

