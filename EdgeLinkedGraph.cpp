#include <iostream>
#include "EdgeLinkedGraph.h"
using namespace std;

//���캯��
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
		cout << "������������������ţ�";
		cin >> index1 >> index2;
		temp = new EdgeNode;
		temp.next = adjlist[index1].firstedge;
		adjlist[i].firstedge = temp;
	}
}

//��������
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

//������ȱ���
template<class DataType>
inline void EdgeLinkedGraph<DataType>::DeepFirstTraverse(int v)
{
	EdgeNode* ptr = nullptr;
	int index;
	cout << "�ѷ��ʣ�" << adjlist[v].vertex << endl;

}

//������ȱ���
template<class DataType>
inline void EdgeLinkedGraph<DataType>::BreathFirstTraverse(int v)
{

}
