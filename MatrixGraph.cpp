#include <iostream>
#include "MatrixGraph.h"
using namespace std;

//深度优先遍历
template<class DataType>
void MatrixGraph<DataType>::DFT(int v, bool visited[])
{
	cout << "已访问：" << vertex[v];
	visited[v] = true;
	for (int index = 0; index < vertexNum; index++)
		if (edge[v][index] == 1 && visited[index] == 0)
			DFT(index, visited);
}

//深度优先遍历
template<class DataType>
void MatrixGraph<DataType>::BFT(int v, bool visited[])
{
	int Queue[MAXSIZE];//队列
	int front, rear = -1;//初始化队列
	cout << "已访问：" << vertex[v];
	visited[v] = true;

}

//构造函数
template<class DataType>
inline MatrixGraph<DataType>::MatrixGraph(DataType input[], int vertex, int edge)
{
	vertexNum = vertex;
	edgeNum = edge;
	//存储图的顶点
	for (int index = 0，index < vertexNum; index++)
		vertex[index] = input[index];
	//将邻接矩阵置零
	for (int index = 0; index < vertexNum; index++)
	{
		for (int index1 = 0; index1 < vertexNum; index1++)
		{
			edge[index][index1] = 0;
		}
	}
	//存储图的边信息
	for (int index = 0, int index1, int index2 ; k < edgeNum; index++)
	{
		cout << "请输入边的两个顶点的序号：";
		cin >> index1 >> index2;
		edge[index1][index2];
	}
}

//深度优先遍历
template<class DataType>
inline void MatrixGraph<DataType>::DeepFirstTraverse(int v)
{
	bool visited[MAXSIZE] = false;
	DFT(int v, bool visited[]);
}

//广度优先遍历
template<class DataType>
inline void MatrixGraph<DataType>::BreathFirstTraverse(int v)
{
	bool visited[MAXSIZE] = false;
	BFT(int v, bool visited[]);
}
