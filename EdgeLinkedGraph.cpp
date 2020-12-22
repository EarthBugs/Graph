#include <iostream>
#include "EdgeLinkedGraph.h"
using namespace std;

//构造函数
template<class DataType>
inline EdgeLinkedGraph<DataType>::EdgeLinkedGraph(DataType data[], int vertexNum, int edgeNum)
{
	this->vertexNum = vertexNum;
	this->edgeNum = edgeNum;
	for (int index = 0; index < VertexNum; index++)
	{
		adjlist[index]->vertex = data[index];
		adjlist[index]->firstedge = nullptr;
	}
	for (int index = 0, index1, index2, EdgeNode* temp; k < edgeNum; index++)
	{
		cout << "请输入边两个顶点的序号：";
		cin >> index1 >> index2;
		temp = new EdgeNode;
		temp.next = adjlist[index1].firstedge;
		adjlist[i].firstedge = temp;
	}
}

//析构函数
template<class DataType>
EdgeLinkedGraph<DataType>::~EdgeLinkedGraph()
{
	EdgeNode* ptr = nullptr;
	for (int index = 0; index < vertexNum; index++)
	{
		ptr = adjlist[index]->firstedge;
		while (ptr!+ nullptr)
		{
			adjlist[index]->firstedge = ptr->next;
			delete ptr;
		}
	}
}

//深度优先遍历
template<class DataType>
inline void EdgeLinkedGraph<DataType>::DeepFirstTraverse(int v)
{
	EdgeNode* ptr = nullptr;
	int index;
	cout << "已访问：" << adjlist[v].vertex << endl;

}

//广度优先遍历
template<class DataType>
inline void EdgeLinkedGraph<DataType>::BreathFirstTraverse(int v)
{

}
