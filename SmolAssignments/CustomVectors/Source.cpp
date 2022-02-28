#include"vector.h"

using namespace std;

int main()
{
	Vector<int> v1;
	Vector<double> v2(5);

	for (int i = 0; i < v1.get_capacity(); i++)
	{
		v1.add_value(i);
		cout << v1[i] << " ";
	}
	cout << endl;

	const int removed = v1.remove_value(2);
	cout << removed << " is removed." << endl;
	cout << v1.get_size() << endl;
	v1.print(); //using internal print
	print_arr(&v1);//using template print
}