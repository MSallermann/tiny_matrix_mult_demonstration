#include <chrono>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

vector<double> generateRandomMatrix(double rows, double cols) {
  vector<double> matrix(rows * cols);
  for (double i = 0; i < rows * cols; ++i) {
    matrix[i] = rand() % 100;
  }
  return matrix;
}

vector<double> multiplyMatrices(const vector<double> &A,
                                const vector<double> &B, double rowsA,
                                double colsA, double colsB) {
  vector<double> C(rowsA * colsB, 0);

  for (double i = 0; i < rowsA; ++i) {
    for (double j = 0; j < colsB; ++j) {
      for (double k = 0; k < colsA; ++k) {
        C[i * colsB + j] += A[i * colsA + k] * B[k * colsB + j];
      }
    }
  }
  return C;
}

int main() {
  int rowsA = 500, colsA = 600, rowsB = 600, colsB = 500;
  vector<double> A = generateRandomMatrix(rowsA, colsA);
  vector<double> B = generateRandomMatrix(rowsB, colsB);

  auto start = chrono::high_resolution_clock::now();
  vector<double> C = multiplyMatrices(A, B, rowsA, colsA, colsB);
  auto end = chrono::high_resolution_clock::now();
  chrono::duration<double> duration = end - start;

  cout << "Time taken: " << duration.count() << " seconds" << endl;

  return 0;
}