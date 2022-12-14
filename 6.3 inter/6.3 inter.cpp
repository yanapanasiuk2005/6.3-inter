#include <iostream>
using namespace std;
template <typename T>
T tmas(T* a, const T size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
int mas(int* a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl; 
	return 0;
}
int main() {
	const int n = 5;
	int a[n];
	tmas<int>(a, n);
	mas(a, n);
	return 0;
}