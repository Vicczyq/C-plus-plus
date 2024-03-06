#pragma once
#include <iostream>
using namespace std;
template <typename T>
class MyArray {
public:
	MyArray(int len);
	~MyArray();
	MyArray(const MyArray& p);
	T get_Item(int flag);
	void Insert(int &a);
	void Pop();
	void Print();
	MyArray& operator=(const MyArray& p);
private:
	T* data;
	int m_Size;
	int m_Count;
};