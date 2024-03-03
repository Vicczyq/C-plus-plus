#include <iostream>
#include <string>
using namespace std;
class MyInt {
	friend ostream & operator<<(ostream& out, MyInt& p);
public:
	//重载前置++运算符
	MyInt operator++()//返回引用的原因是
	{
		i++;
		return *this;
	}
	//重载后置++运算符
	

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