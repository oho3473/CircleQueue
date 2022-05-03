#include<iostream>
#include"CircleQueue.h"

int main()
{
	int Queue[10]{};
	int num, input;

	static int head{ 0 }, tail{ 0 };

	while (true)
	{
		std::cout << "-----------------" << std::endl;
		std::cout << "1 : enqueue, 2 : dequeue" << std::endl;
		std::cout << "-----------------" << std::endl;

		std::cin >> num;

		std::cout << "-----------------" << std::endl;

		if (num > 2 || num < 0)
		{
			std::cout << "잘못 입력했습니다" << std::endl;
			continue;
		}

		switch (num)
		{
			case ENQUEUE:
				std::cout << " > enqueuevalue : ";
				std::cin >> input;
				std::cout << std::endl;

				Enqueue(Queue, input, tail, head);
				PrintQueue(Queue, head, tail);
				break;

			case DEQUEUE:
				Dequeue(Queue, head, tail);
				PrintQueue(Queue, head, tail);
				break;

			default:
				break;
		}
	}
}