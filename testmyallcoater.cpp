#define _CRT_SECURE_NO_WARNINGS

#include"myallocater.h"
#include<vector>
using namespace std;
int main()
{
	vector<int, myallocater<int>>vec;
	for (int i = 0; i < 10; ++i)
	{
		vec.push_back(rand() % 10);
	}
	for (auto val : vec)
	{
		cout << val << " ";
	}
	cout << endl;

	return 0;
}

