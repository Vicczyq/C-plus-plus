#include <iostream>
#include "Array.cpp"
using namespace std;
int main()
{	
	MyArray<int> a(10);
	int p;
	while (true)
	{
		cout << "0.��ӡ����" << endl;
		cout << "1.����Ԫ��" << endl;
		cout << "2.ɾ��Ԫ��" << endl;
		cout << "3.��ȡԪ��" << endl;
		cout << "4.�˳�" << endl;
		cout << "������ָ��:";
		cin >> p;
		switch (p)
		{
			case 0:
				a.Print();
				break;
			case 1:
				int item;
				cout << "������Ԫ��:";
				cin >> item;
				a.Insert(item);
				break;
			case 2:
				a.Pop();
				break;
			case 3:
				cout << "�������±�" << endl;
				int flag;
				cin >> flag;
				cout<<a.get_Item(flag);
				break;
			case 4:
				exit(0);
				break;
			default:
				system("cls");
				break;
		}	
	}
	return 0;
}