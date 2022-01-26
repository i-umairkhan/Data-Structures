#include <iostream>
using namespace std;
int main()
{
  int rows, colums; //Rows and columns variables for matrix.
  cout << "Enter Number of Rows(M) : ";
  cin >> rows;
  cout << "Enter Number of Columns(N) : ";
  cin >> colums;
  int matrix_1[rows][colums];   // Initializing Matrix 1.
  int matrix_2[rows][colums];   // Initializing Matrix 2.
  int matrix_add[rows][colums]; // Matrix for additon.
  int matrix_sub[rows][colums]; // Matrix for Subtraction.
  int matrix_mul[rows][colums]; // Matrix for Multiplication.

  // Loop to intializine random numbers in Matrix.
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colums; j++)
    {
      matrix_1[i][j] = rand() % 10; // Initializing Random Numbers at index [i][j] using Rand()
    }
  }

  // Loop To print Matrix.
  cout << "- MATRIX 1 -" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colums; j++)
    {
      cout << matrix_1[i][j] << "  ";
    }
    cout << endl;
  }

  // Loop to intializine random numbers in Matrix.
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colums; j++)
    {
      matrix_2[i][j] = rand() % 5; // Initializing Random Numbers at index [i][j] using Rand()
    }
  }

  // Loop To print Matrix.
  cout << "- Matrix 2 -" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colums; j++)
    {
      cout << matrix_2[i][j] << "  ";
    }
    cout << endl;
  }

  // Loop to add both Matix and Print.
  cout << "- Matrix 1 + MATRIX 2 -" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colums; j++)
    {
      matrix_add[i][j] = matrix_1[i][j] + matrix_2[i][j];
      cout << matrix_add[i][j] << "  ";
    }
    cout << endl;
  }

  // Loop to Subtract both Matix and Print.
  cout << "- Matrix 1 - MATRIX 2 -" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colums; j++)
    {
      matrix_add[i][j] = matrix_1[i][j] - matrix_2[i][j];
      cout << matrix_add[i][j] << "  ";
    }
    cout << endl;
  }

  // Loop to Multiply both Matix and Print.
  cout << "- Matrix 1 x MATRIX 2 -" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < colums; j++)
    {
      matrix_add[i][j] = matrix_1[i][j] * matrix_2[i][j];
      cout << matrix_add[i][j] << "  ";
    }
    cout << endl;
  }

  // Transpose a Matrix.
  cout << "- Transpose MATRIX 1 -" << endl;
  for (int i = 0; i < colums; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      cout << matrix_1[j][i] << "  ";
    }
    cout << endl;
  }

  return 0;
}
