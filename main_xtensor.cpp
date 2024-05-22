
#include "xtensor/xtensor_forward.hpp"
#include <chrono>
#include <iostream>
#include <xtensor/xcsv.hpp>
#include <xtensor/xfixed.hpp>
#include <xtensor/xrandom.hpp>
#include <xtensor/xtensor.hpp>
#include <xtensor/xview.hpp>

using namespace std;

using MatrixX = xt::xtensor<double, 2>;

int main() {
  int rowsA = 500, colsA = 600, rowsB = 600, colsB = 500;
  MatrixX A = xt::random::rand<double>({rowsA, colsA});
  MatrixX B = xt::random::rand<double>({rowsB, colsB});

  auto start = chrono::high_resolution_clock::now();

  auto end = chrono::high_resolution_clock::now();
  chrono::duration<double> duration = end - start;

  cout << "Time taken: " << duration.count() << " seconds" << endl;

  return 0;
}