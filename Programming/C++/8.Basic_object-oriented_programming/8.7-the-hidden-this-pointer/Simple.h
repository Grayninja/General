
#ifndef SIMPLE_H
#define SIMPLE_H
#include <iostream>

class Simple 
{
private:
	int m_ID;
public:
	Simple (int ID) {
		SetID(ID);
	}
	void SetID(int ID) { m_ID = ID; }
	int GetID() { return m_ID; }
};

class Something
{
private:
	int data;
	int data1;
public:
	Something(int data) { this->data = data; }
	int GetData() { return this->data; }
	void GetAddress() {
		std::cout << "&data: " << &data 
			<< "\n&data1: " << &data1
			<< "\nthis: " << this
			<< "\n&*this: " << &(*this) << std::endl;
	}
};

#endif
