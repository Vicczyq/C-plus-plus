#include <iostream>
#include "Array.cpp"
using namespace std;
int main()
{	
	MyArray<int> a(10);
	int p;
	while (true)
	{
		cout << "0.打印数组" << endl;
		cout << "1.插入元素" << endl;
		cout << "2.删除元素" << endl;
		cout << "3.获取元素" << endl;
		cout << "4.退出" << endl;
		cout << "请输入指令:";
		cin >> p;
		switch (p)
		{
			case 0:
				a.Print();
				break;
			case 1:
				int item;
				cout << "请输入元素:";
				cin >> item;
				a.Insert(item);
				break;
			case 2:
				a.Pop();
				break;
			case 3:
				cout << "请输入下标" << endl;
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