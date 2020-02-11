#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double A[][N]){
	for(int i=0;i<N;i++)
	{
		cout << "Row "<< i << ":";
		cin >> A[i][0]>> A[i][1] >>  A[i][2] >>  A[i][3] >>  A[i][4];
	}
}
// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
