#include <iostream>
#include "MatrixGraph.cpp"
#include "EdgeLinkedGraph.cpp"
using namespace std;

int main()
{
	char data[]{ 'A', 'B', 'C', 'D', 'E' };
	
	//cout << "##########" << endl;
	//cout << "以下是邻接矩阵：" << endl;
	//MatrixGraph<char> MG(data, 5, 6);
	//cout << "执行深度优先遍历：" << endl;
	//MG.DeepFirstTraverse(0);
	//cout << endl << "执行广度优先遍历：" << endl;
	//MG.BreathFirstTraverse(0);
	//cout << "以上是邻接矩阵：" << endl;
	//cout << "##########" << endl;
	cout << "\n";
	cout << "##########" << endl;
	cout << "以下是邻接表：" << endl;
	EdgeLinkedGraph<char> EG(data, 5, 4);
	cout << "执行深度优先遍历：" << endl;
	EG.DeepFirstTraverse(0);
	cout << endl << "执行广度优先遍历：" << endl;
	EG.BreathFirstTraverse(0);
	cout << "以上是邻接矩阵：" << endl;
	cout << "##########" << endl;
}