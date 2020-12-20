#include <iostream>
#include "MatrixGraph.cpp"
#include "EdgeLinkedGraph.h"
using namespace std;

int main()
{
	cout << "##########" << endl;
	cout << "以下是邻接矩阵：" << endl;
	char data[]{ 'A', 'B', 'C', 'D', 'E' };
	MatrixGraph<char> MG(data, 5, 6);
	cout << "执行深度优先遍历：" << endl;
	MG.DeepFirstTraverse(0);
	cout << endl << "执行广度优先遍历：" << endl;
	MG.BreathFirstTraverse(0);
	cout << "以上是邻接矩阵：" << endl;
	cout << "##########" << endl;
}