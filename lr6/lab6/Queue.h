#pragma once
#include "iostream"
#include "conio.h"

using namespace std;

class Queue
{
	int *arr;
	int count;
	int end = 0, start = 0, size = 0;
public:
	Queue(int count); // init
	Queue(const Queue &other);  //copy
	Queue(Queue &&other); //peremeshenie
	Queue &operator=(const Queue &other); //prisvaivanie
	Queue &operator=(Queue &&other); //prisv + peremesh
	~Queue(); //деструктор
	int GetSize();
	void Push(int element); //Paste element
	int Pop(); //Delete element
	int Peek(); //peek element
	bool CheckNoEmptyQueue(); //check element
	friend ostream & operator << (ostream & stream, const Queue &a); //output
};
