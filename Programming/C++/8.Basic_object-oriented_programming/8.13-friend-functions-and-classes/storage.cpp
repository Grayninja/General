#include <iostream>

class Storage
{
private:
	int m_nValue;
	double m_dValue;
public:
	Storage(): m_nValue(0),m_dValue(0) {}
	Storage(int nValue, double dValue)
	{
		m_nValue = nValue;
		m_dValue = dValue;
	}

	friend class Display;
};

class Display
{
private:
	bool m_displayIntFirst;
public:
	Display(): m_displayIntFirst(true) {}
	Display(bool displayIntFirst) { m_displayIntFirst = displayIntFirst; }

	void displayItem(Storage &a_storage)
	{
		if (m_displayIntFirst) {
			std::cout << a_storage.m_nValue << " " 
				<< a_storage.m_dValue << std::endl;
		}
		else {
			std::cout << a_storage.m_dValue << " "
				<< a_storage.m_nValue << std::endl;
		}
	}
};


int main()
{
	Storage storage(5, 3.1415926);
	Display display(false);

	display.displayItem(storage);
	return 0;
}
