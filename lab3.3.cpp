#include <iostream>
using namespace std;

int main()
{
	const int NUM = 10;
	long long  res = 1;
	for (int i = 1; i <= NUM; i++)
		res *= (i * (i + 1)) / 2;
	cout << res << endl;
	return 0;
}s