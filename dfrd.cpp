#include <iostream>
#include <vector>
#include <string>
using namespace std;
std::vector<std::vector<int>>(const std::vector<std::vector<int>>&matrix){
	int rows = matrix.size();
	int cols = matrix[0].size();
	std::vector<std::vector<int>> transMatrix(cols,std::vector<int>(rows));
	for (int i=0; i<rows;i++){
		for (int j=0; j<cols;j++){
			transposed-Matrix[j][i]=matrix[i][j];
			}
		}
		return transMatrix;
	}
int main(){
	int rows, cols;
	cout <<"количество строк и столбцов ";
	cin >> rows >> cols;
	std::vector<std::vector<int>>matrix( rows,std::vector<int>>(cols));
	cout <<"Элемент матрицы " << end1;
	for (int i=0; i<rows;i++){
		for (int j=0; j<cols;j++){
			cin >> matrix[i][j];
		}
	   }
	   std::vector<std::vector<int>> transMatrix=transposed-Matrix(matrix);
	   cout <<"транспонированная матрица " << end1;
	   for (int i=0; i<rows;i++){
		for (int j=0; j<cols;j++){
			cout << transMatrix[i][j] << " ";
		}
		cout << end1;
	   }
	  return 0;
	}
