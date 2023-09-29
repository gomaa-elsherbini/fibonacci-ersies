#include <iostream>
#include <iomanip>
using namespace std;



void fibonacciSeriesOfNum(int num)// 1 1 2 3 5 8 13 21 34 55
{
	int x = 0;
	int y = 1; 
	int fibonacci= 1;

	for (int i =1; i <= num; i++)
	{
		cout << fibonacci <<"  ";

		fibonacci = x+y;
		x = y;
		y = fibonacci ;
	}

	cout << endl;
}

int main()
{

	fibonacciSeriesOfNum(10);


	system("pause>0");

	return 0;
}



