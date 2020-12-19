#pragma once

const int MAXSIZE;

template<class DataType>
class MatrixGraph
{
private:
	DataType vertex[MAXSIZE];//顶点数组
	bool edge[MAXSIZE][MAXSIZE];//邻接矩阵
	int vertexNum, edgeNum;//顶点数和边数
public:
	MatrixGraph(DataType input[], int vertex, int edge);//构造函数
	~MatrixGraph();//析构函数
	void DeepFirstTraverse(int v);//深度优先遍历
	void BreathFirstTraverse(int v);//广度优先遍历
};