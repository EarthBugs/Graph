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
	MatrixGraph(DataType data[], int vertex, int edge);//���캯��
	~MatrixGraph();//��������
	void DeepFirstTraverse(int )
};