#include <iostream>
#include "MatrixGraph.cpp"
#include "EdgeLinkedGraph.h"
using namespace std;

int main()
{
	cout << "##########" << endl;
	cout << "�������ڽӾ���" << endl;
	char data[]{ 'A', 'B', 'C', 'D', 'E' };
	MatrixGraph<char> MG(data, 5, 6);
	cout << "ִ��������ȱ�����" << endl;
	MG.DeepFirstTraverse(0);
	cout << endl << "ִ�й�����ȱ�����" << endl;
	MG.BreathFirstTraverse(0);
	cout << "�������ڽӾ���" << endl;
	cout << "##########" << endl;
}