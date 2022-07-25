#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int array1[500001] = { 0, };
int array2[500001] = { 0, };

int main()
{
	int n, m;
	cin >> n;

	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < n; i++)
	{
		cin >> array1[i];
	}
	for (int i = 0; i < n; i++)
	{
		v1.push_back(array1[i]);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> array2[i];
	}
	for (int i = 0; i < m; i++)
	{
		v2.push_back(array2[i]);
	}
	//binary search 하기 위해서는 sort(오름차순으로 정렬)을 먼저 해야한다.. 그렇게 안하면 당연히 결과가 모두 0이 나온다.
	sort(v1.begin(), v1.end());
	for (int j = 0; j < m; j++)
	{
		cout << binary_search(v1.begin(), v1.end(), v2[j]) << " ";
	}

	return 0;
	
}