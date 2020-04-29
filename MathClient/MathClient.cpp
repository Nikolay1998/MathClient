// MathClient.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include "MathLibrary.h"

using namespace std;

int main()
{
  int dots_num;
  cout << "Enter number of dots:";
  cin >> dots_num;
  int* x_coords = new int[dots_num];
  int* y_coords = new int[dots_num];
  for (int i = 0; i < dots_num; i++) {
    cout << "Enter coords of " << i << " coord: ";
    cin >> x_coords[i] >> y_coords[i];
  }
  int* results = getCloserDots(x_coords, y_coords, dots_num);
  cout << results[0] << results[1];
}
