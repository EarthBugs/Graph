#pragma once

const int MAXSIZE1 = 16;

//�߽��
struct EdgeNode
{
	int adjvex;
	EdgeNode* next = nullptr;
};

//����
template<class DataType>
struct VertexNode
{
	DataType vertex;
	EdgeNode* firstedge = nullptr;
};

template<class DataType>
class EdgeLinkedGraph
{
private:
	VertexNode<DataType> adjlist[MAXSIZE1];//��Ŷ���������
	int vertexNum, edgeNum;//�������ͱ���
	void DFT(int v, bool visited[]);
	void BFT(int v, bool visited[]);
public:
	EdgeLinkedGraph(DataType data[], int vertexNum, int edgeNum);//���캯��
	~EdgeLinkedGraph();//��������
	void DeepFirstTraverse(int v);//������ȱ���
	void BreathFirstTraverse(int v);//������ȱ���
};