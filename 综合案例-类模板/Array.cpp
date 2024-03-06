#include <iostream>
#include "Array.h"
using namespace std;
template <typename T>
MyArray<T>::MyArray(int len) {
	data = new T[len];
	m_Count = 0;
	m_Size = len;
}
template <typename T>
MyArray<T>::~MyArray() {
	if (data != NULL) {
		delete[] data;
		data = NULL;
	}
}
template <typename T>
MyArray<T>::MyArray(const MyArray& p) {
	data = new T[p.m_Size];
	m_Size = p.m_Size;
	m_Count = p.m_Count;
	for (int i = 0; i < m_Count; i++){
		data[i] = p.data[i];
	}
}
template <typename T>
MyArray<T>& MyArray<T>::operator=(const MyArray & p){
	if (data != NULL) {
		delete[] data;
		data = NULL;
	}
	m_Size = p.m_Size;
	m_Count = p.m_Count;
	data = new T[m_Size];
	for (int i = 0; i < m_Count; i++) {
		data[i] = p.data[i];
	}
	return *this;
}
template <typename T>
void MyArray<T>::Print() {
	for (int i = 0; i < m_Count; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}

template <typename T>
void MyArray<T>::Insert(int& a) {
	if (m_Count == m_Size)
	{
		cout << "插入失败，数组空间已满" << endl;
		return;
	}
	data[m_Count++] = a;
}

template <typename T>
void MyArray<T>::Pop() {
	if (m_Count == 0) {
		cout << "删除失败，数组为空" << endl;
		return;
	}
	m_Count--;
}

template <typename T>
T MyArray<T>::get_Item(int flag) {
	if (flag <= 0 || flag >= m_Count) {
		return;
	}
	return data[flag];
}