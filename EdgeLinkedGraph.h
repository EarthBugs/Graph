#pragma once

//�߽��
struct EdgeNode
{
	int adjvex;
	EdgeNode* next;
};

//����
template<class DataType>
struct VertexNode
{
	DataType vertex;
	EdgeNode* firstedge;
};

template<class DataType>
class EdgeLinkedGraph
{
private:
	VertexNode<DataType> adjlist[MAXSIZE];//��Ŷ���������
	int vertexNum, edgeNum;//�������ͱ���
public:
	EdgeLinkedGraph(DataType data[], int vertexNum, int edgeNum);//���캯��
	~EdgeLinkedGraph();//��������
	void DeepFirstTraverse(int v);//������ȱ���
	void BreathFirstTraverse(int v);//������ȱ���
};