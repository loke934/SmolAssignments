#include"vector.h"

using namespace std;

int main()
{
	Vector<int> v1;
	Vector<double> v_double(5);

	for (int i = 0; i < v1.get_capacity(); i++)
	{
		v1.add_value(i);
	}
	cout << endl;

	int removed_value = v1.remove_value_at_end();
	cout << "Removed value: " << removed_value << endl;
	v1.print();//using internal print

	v1.remove_value(2);
	print_arr(&v1);//using template print
	cout << "Size: " << v1.get_size() << endl;

	Vector<int> v2;

	for (int i = 0; i < v2.get_capacity(); i++)
	{
		v2.add_value(i);
		cout << v2[i] << " ";
	}
	cout << endl;

	Vector<int> v3(v2);
	v3.print();

	

	return 0;
}