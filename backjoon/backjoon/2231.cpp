#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
int in, out;
using namespace std;

int solve(void)
{
	for (int i = 1; i < in; i++)
	{
		
		int num = i;
		int sum = i;
		while (num != 0)
		{
			sum += num % 10;
			num /= 10;
		}
		if (sum  == in) return i;
	}
	return 0;
}
int main(void)
{
	cin >> in;
	
	cout << solve();
	return 0;
}