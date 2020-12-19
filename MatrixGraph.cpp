#include <iostream>
#include "MatrixGraph.h"
using namespace std;

//构造函数
template<class DataType>
inline MatrixGraph<DataType>::MatrixGraph(DataType input[], int vertex, int edge)
{
	vertexNum = vertex; edgeNum = edge;
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
	for (int index = 0; k < edgeNum; index++)
	{

	}
}

//析构函数
template<class DataType>
inline MatrixGraph<DataType>::~MatrixGraph()
{

}

//深度优先遍历
template<class DataType>
inline void MatrixGraph<DataType>::DeepFirstTraverse(int v)
{

}

//广度优先遍历
template<class DataType>
inline void MatrixGraph<DataType>::BreathFirstTraverse(int v)
{

}
