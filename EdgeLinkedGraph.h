#pragma once

const int MAXSIZE1 = 16;

//边结点
struct EdgeNode
{
	int adjvex;
	EdgeNode* next = nullptr;
};

//点结点
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
	VertexNode<DataType> adjlist[MAXSIZE1];//存放顶点表的数组
	int vertexNum, edgeNum;//顶点数和边数
	void DFT(int v, bool visited[]);
	void BFT(int v, bool visited[]);
public:
	EdgeLinkedGraph(DataType data[], int vertexNum, int edgeNum);//构造函数
	~EdgeLinkedGraph();//析构函数
	void DeepFirstTraverse(int v);//深度优先遍历
	void BreathFirstTraverse(int v);//广度优先遍历
};