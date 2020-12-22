#pragma once

//边结点
struct EdgeNode
{
	int adjvex;
	EdgeNode* next;
};

//点结点
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
	VertexNode<DataType> adjlist[MAXSIZE];//存放顶点表的数组
	int vertexNum, edgeNum;//顶点数和边数
public:
	EdgeLinkedGraph(DataType data[], int vertexNum, int edgeNum);//构造函数
	~EdgeLinkedGraph();//析构函数
	void DeepFirstTraverse(int v);//深度优先遍历
	void BreathFirstTraverse(int v);//广度优先遍历
};