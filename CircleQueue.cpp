#include<iostream>
#include"CircleQueue.h"

void Enqueue(int queue[], int input, int& tail, int& head)
{
	int Head = head % 10;
	int Tail = tail % 10;

	if (Head == ((tail + 1) % 10))
	{
		std::cout << "가득 찼습니다" << std::endl;
		return;
	}

	queue[Tail] = input;

	tail++;
}

void Dequeue(int queue[], int& head, int& tail)
{
	int Head = head % 10;
	int Tail = tail % 10;

	if (Head == Tail)
	{
		std::cout << "값이 없습니다" << std::endl;
		return;
	}

	std::cout << "dequeue : " << queue[Head] << std::endl;
	queue[Head] = 0;
	head++;
}

void PrintQueue(int queue[], int& head, int& tail)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << queue[i] << std::endl;
	}
}