#include <iostream>
#include "MatrixGraph.cpp"
#include "EdgeLinkedGraph.cpp"
using namespace std;

int main()
{
	char data[]{ 'A', 'B', 'C', 'D', 'E' };
	
	//cout << "##########" << endl;
	//cout << "�������ڽӾ���" << endl;
	//MatrixGraph<char> MG(data, 5, 6);
	//cout << "ִ��������ȱ�����" << endl;
	//MG.DeepFirstTraverse(0);
	//cout << endl << "ִ�й�����ȱ�����" << endl;
	//MG.BreathFirstTraverse(0);
	//cout << "�������ڽӾ���" << endl;
	//cout << "##########" << endl;
	cout << "\n";
	cout << "##########" << endl;
	cout << "�������ڽӱ�" << endl;
	EdgeLinkedGraph<char> EG(data, 5, 4);
	cout << "ִ��������ȱ�����" << endl;
	EG.DeepFirstTraverse(0);
	cout << endl << "ִ�й�����ȱ�����" << endl;
	EG.BreathFirstTraverse(0);
	cout << "�������ڽӾ���" << endl;
	cout << "##########" << endl;
}