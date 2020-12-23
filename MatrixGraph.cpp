#include <iostream>
#include "MatrixGraph.h"
using namespace std;

//深度优先遍历
template<class DataType>
void MatrixGraph<DataType>::DFT(int v, bool visited[])
{
	cout << "已访问：" << vertex[v] << endl;
	visited[v] = true;
	for (int index = 0; index < vertexNum; index++)
		if (edge[v][index] == true && visited[index] == 0)
			DFT(index, visited);
}

//广度优先遍历
template<class DataType>
void MatrixGraph<DataType>::BFT(int v, bool visited[])
{
	int Queue[MAXSIZE];//队列
	int front = -1, rear = -1;//初始化队列
	cout << "已访问：" << vertex[v] << endl;
	visited[v] = true;
	Queue[++rear] = v;
	while (front != rear)
	{
		front++;
		v = Queue[front];
		for (int index = 0; index < vertexNum; index++)
			if (edge[v][index] == true && visited[index] == false)
			{
				cout << "已访问：" << vertex[index] << endl;
				visited[index] = true;
				rear++;
				Queue[rear] = index;
			}
	}
}

//构造函数
template<class DataType>
inline MatrixGraph<DataType>::MatrixGraph(DataType input[], int vertexNum, int edgeNum)
{
	this->vertexNum = vertexNum;
	this->edgeNum = edgeNum;
	//存储图的顶点
	for (int index = 0; index < vertexNum; index++)
		vertex[index] = input[index];
	//将邻接矩阵置零
	for (int index = 0; index < vertexNum; index++)
	{
		for (int index1 = 0; index1 < vertexNum; index1++)
		{
			edge[index][index1] = false;
		}
	}
	//存储图的边信息
	for (int index = 0, index1, index2; index < edgeNum; index++)
	{
		cout << "请输入边的两个顶点的序号：";
		cin >> index1 >> index2;
		edge[index1][index2] = true; edge[index2][index1] = true;
	}
}

//深度优先遍历
template<class DataType>
inline void MatrixGraph<DataType>::DeepFirstTraverse(int v)
{
	bool visited[MAXSIZE]{ false };
	DFT(v, visited);
}

//广度优先遍历
template<class DataType>
inline void MatrixGraph<DataType>::BreathFirstTraverse(int v)
{
	bool visited[MAXSIZE]{ false };
	BFT(v, visited);
}
