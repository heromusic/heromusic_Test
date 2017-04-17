// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int MAX_COUNT = 10;

int Largest(int Arr[], int last)
{
	int largest = 0;
	for (int i = 0; i <= last; ++i)
	{
		if (Arr[i] > Arr[largest])
		{
			largest = i;
		}
	}

	return largest;
}

void SelectionSort(int Arr[], int max)
{
	for (int i = max - 1; i > 0; --i)
	{
		int k = Largest(Arr, i);
		int temp;
		temp = Arr[i];
		Arr[i] = Arr[k];
		Arr[k] = temp;

		for (int i = 0; i < MAX_COUNT; ++i)
		{
			cout << Arr[i] << "  ";
		}
		cout << endl << endl;
	}

	for (int i = 0; i < MAX_COUNT; ++i)
	{
		cout << Arr[i] << endl;
	}
}



void LinerSelect(int Arr[], int maxCount)
{
	// 1번
	if (maxCount < 5)
	{
		return;
	}

	// 2번
	int mengeCount = maxCount / 5;
	int restCount = maxCount % 5;
	if (restCount != 0)
	{
		mengeCount += 1;
	}
	const int ArrCount = mengeCount;
	int mengeArr[10];
}

class CTextBlock {
public:
	char & operator[] (size_t position) const
	{
		return pText[position];
	}
	CTextBlock(char* word)
	{
		pText = word;
	}
private:
	char* pText;
};


class CCTest {
public:
	void setNumber(int);
	void printNumber() const;
private:
	int number;
};

void CCTest::setNumber(int num) { number = num; }

void CCTest::printNumber() const {
	cout << "\nBefore: " << number;
	const_cast< CCTest * >(this)->number--;
	cout << "\nAfter: " << number;
}

class CInfo
{
	int m_iX;

public:
	void OutPut()
	{
		cout << m_iX << endl;
	}
	CInfo()
	{
		cout << m_iX << endl;
		cout << "생성자" << endl;
		cout << m_iX << endl;
	}
};

int main()
{
	/*CCTest X;
	X.setNumber(8);
	X.printNumber();*/
	char* a = "abc";
	char* b = "123";

	strcpy_s(b, sizeof(b), a);
	/*const int* c = new int(355);
	int* p = const_cast<int*>(c);
	*p = 240;*/

	cout << b << endl;

	/*int myarry[] = {8, 31, 48, 73, 3, 65, 20, 29, 11, 15};


	SelectionSort(myarry, MAX_COUNT);*/

    return 0;
}
