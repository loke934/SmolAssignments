#include"vector.h"

using namespace std;

int main()
{
	Vector<int> v1;
	Vector<double> v2(5);

	for (int i = 0; i < v1.GetCapacity(); i++)
	{
		v1.AddValue(i);
		cout << v1[i] << " ";
	}
	cout << endl;

	const int removed = v1.RemoveValue(2);
	cout << removed << " is removed." << endl;
	cout << v1.GetSize() << endl;
	v1.Print(); //using internal print
	print_arr(&v1);//using template print
}