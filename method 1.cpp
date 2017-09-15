#include<iostream>
using namespace std;
void Matrix_Mul(){                                     /*variables declaration*/
	int const size = 3;
	int i, s, z, n, L, M;
	int arr_C[size][size];
	int arr_A[size][size];                             /*matrix A*/
	cout << "\nENTRIES OF MATRIX 'A' : ";
	for (i = 0; i < size; i++) {
		cout << endl;
		for (s = 0; s < size; s++){
			z = rand() % 100 + 1;                     /*randomly generated matrices*/
			arr_A[i][s] = z;
			cout << arr_A[i][s] << "\t";
		}
	}

	int arr_B[size][size];
	cout << "\nENTRIES OF MATRIX 'B' : ";
	for (i = 0; i < size; i++) {
		cout << endl;                                   /*matrix B*/
		for (s = 0; s < size; s++){
			n = rand() % 100 + 1;
			arr_B[i][s] = n;
			cout << arr_B[i][s] << "\t";
		}
	}
	

	for (i = 0; i < 3; i++)
	{
		for (s = 0; s < size; s++)
		{
			L = 0;
			for (M = 0; M < 3; M++)
			{
				L = L + arr_A[i][M] * arr_B[M][s];                /*matrix multiplication*/
			}
			arr_C[i][s] = L;
		}
	}
	cout << "\n\nRESULTANT MATRIX : \n\n\n";
	for (i = 0; i < 3; i++)
	{
		for (s = 0; s < 3; s++)
		{                                                         /*display of resultant matrix*/
			cout << arr_C[i][s] << " ";
		}
		cout << "\n";
	}
}

void main(){                                                  /*main body*/
		Matrix_Mul();
	}
