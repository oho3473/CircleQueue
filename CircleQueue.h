#pragma once

enum Commanad
{
	ENQUEUE = 1,
	DEQUEUE = 2
};

void Enqueue(int queue[], int input, int& tail, int& head);

void Dequeue(int queue[], int& head, int& tail);

void PrintQueue(int queue[], int& head, int& tail);