#pragma once

const int MAXSIZE = 16;

template<class DataType>
class MatrixGraph
{
private:
	DataType vertex[MAXSIZE];//��������
	bool edge[MAXSIZE][MAXSIZE];//�ڽӾ���
	int vertexNum, edgeNum;//�������ͱ���
	void DFT(int v, bool visited[]);//������ȱ���
	void BFT(int v, bool visited[]);//������ȱ���
public:
	MatrixGraph(DataType input[], int vertex, int edge);//���캯��
	void DeepFirstTraverse(int v);//������ȱ���
	void BreathFirstTraverse(int v);//������ȱ���
};