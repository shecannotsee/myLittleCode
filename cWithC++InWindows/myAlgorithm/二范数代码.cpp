
#include <iostream>
#include <cmath>
 
using namespace std;

#define NUM 3
#define ROW 3
#define COLUMN 3
 
float num[NUM][NUM] = { 1,2,3,4,5,6,7,8,9 };
 
void Loop(float a[NUM][NUM], float u[NUM], int n)
{
	float S, U[NUM];
	int i, j;
	for (int i = 0; i <= n - 1; i++)
	{
		U[i] = u[i];
	}
	for (i = 0; i <= n - 1; i++)
	{
		S = 0.0;
		for (j = 0; j <= n - 1; j++)
		{
			S = S + a[i][j] * U[j];
		}
		u[i] = S;
	}
}
 
float Max(float u[NUM], int n)
{
	float max;
	int i;
	max = u[0];
	for (i = 0; i <= n - 1; i++)
	{
		if (u[i] > max)
		{
			max = u[i];
		}
	}
	return max;
}
 
 
//对矩阵进行转置操作
void MatrixTransport(float a[NUM][NUM],float b[NUM][NUM])
{
	for (int i = 0; i < NUM; i++)
		for (int j = 0; j < NUM; j++)
		{
			b[i][j] = a[j][i];
		}
}
 
void OutputMatrix(float a[NUM][NUM])
{
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 0; j < NUM; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
 
 
void MulMatrix(float a[NUM][NUM],float b[NUM][NUM],float c[NUM][NUM])
{
	float temp = 0;
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 0; j < NUM; j++)
		{
			temp = 0;
			for (int k = 0; k < NUM; k++)
				temp += a[i][k] * b[k][j];
			c[i][j] = temp;
		}
	}
}
 
 
//求二范数
float GetNorm(float a[NUM][NUM])
{
	float x[NUM], y, z;
	float u[NUM] = { 1, 1, 1 };
	int i, j, n = NUM;
	y = Max(u, n);
	do
	{
		z = y;
		Loop(a, u, n);
		y = Max(u, n);
		for (i = 0; i <= n - 1; i++)
		{
			x[i] = u[i] / y;
			u[i] = x[i];
		}
	} while (fabs(z - y) >= 0.0000005);
	return sqrt(y);
}
 
int main()
{
	float zhuanZhi[NUM][NUM];
	float mul[NUM][NUM];
	MatrixTransport(num, zhuanZhi);
	OutputMatrix(zhuanZhi);
	MulMatrix(num, zhuanZhi, mul);
	OutputMatrix(mul);
	float norm = GetNorm(mul);
	cout << norm << endl;
	return 0;
}