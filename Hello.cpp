#include <iostream>
#include <string>
using namespace std;
class MyInt {
	friend ostream & operator<<(ostream& out, MyInt& p);
public:
	//����ǰ��++�����
	MyInt operator++()//�������õ�ԭ����
	{
		i++;
		return *this;
	}
	//���غ���++�����
	

private:
	string name = "vicczyq";
	int i = 10;
};

ostream & operator<<(ostream &out, MyInt &p)
{
	out << p.name << p.i;
	return out;
}
void main()
{
	MyInt a;
	cout << a << endl;
	++(++a);
	cout << a << endl;

}