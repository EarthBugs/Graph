#pragma once

const int MAXSIZE = 16;

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
	void DFT(int v, bool visited[]);
	void BFT(int v, bool visited[]);
public:
	EdgeLinkedGraph(DataType data[], int vertexNum, int edgeNum);//���캯��
	~EdgeLinkedGraph();//��������
	void DeepFirstTraverse(int v);//������ȱ���
	void BreathFirstTraverse(int v);//������ȱ���
};