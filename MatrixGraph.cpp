#include <iostream>
#include "MatrixGraph.h"
using namespace std;

//���캯��
template<class DataType>
inline MatrixGraph<DataType>::MatrixGraph(DataType input[], int vertex, int edge)
{
	vertexNum = vertex; edgeNum = edge;
	//�洢ͼ�Ķ���
	for (int index = 0��index < vertexNum; index++)
		vertex[index] = input[index];
	//���ڽӾ�������
	for (int index = 0; index < vertexNum; index++)
	{
		for (int index1 = 0; index1 < vertexNum; index1++)
		{
			edge[index][index1] = 0;
		}
	}
	//�洢ͼ�ı���Ϣ
	for (int index = 0; k < edgeNum; index++)
	{

	}
}

//��������
template<class DataType>
inline MatrixGraph<DataType>::~MatrixGraph()
{

}

//������ȱ���
template<class DataType>
inline void MatrixGraph<DataType>::DeepFirstTraverse(int v)
{

}

//������ȱ���
template<class DataType>
inline void MatrixGraph<DataType>::BreathFirstTraverse(int v)
{

}
