#pragma once

const int MAXSIZE;

template<class DataType>
class MatrixGraph
{
private:
	DataType vertex[MAXSIZE];//��������
	bool edge[MAXSIZE][MAXSIZE];//�ڽӾ���
	int vertexNum, edgeNum;//�������ͱ���
public:
	MatrixGraph(DataType input[], int vertex, int edge);//���캯��
	~MatrixGraph();//��������
	void DeepFirstTraverse(int v);//������ȱ���
	void BreathFirstTraverse(int v);//������ȱ���
};