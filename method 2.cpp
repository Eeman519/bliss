#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int arr_A[2][2], arr_B[2][2], arr_C[2][2], i, j, k;

	cout << "Matrix A : " << endl;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << "Enteries: " << i << j << endl;
			cin >> arr_A[i][j];
		}
	}

	cout << "Matrix B :" << endl;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << "Enteries: " << i << j << endl;
			cin >> arr_B[i][j];
		}
	}
	int p1, p2, p3, p4, p5, p6, p7;
	/* algorithms formula */
	p1 = (arr_A[0][0] + arr_A[1][1]) * (arr_B[0][0] + arr_B[1][1]);
	p2 = (arr_A[1][0] + arr_A[1][1]) * arr_B[0][0];
	p3 = arr_A[0][0] * (arr_B[0][1] - arr_B[1][1]);
	p4 = arr_A[1][1] * (arr_B[1][0] - arr_B[0][0]);
	p5 = (arr_A[0][0] + arr_A[0][1]) * arr_B[1][1];
	p6 = (arr_A[1][0] - arr_A[0][0]) * (arr_B[0][0] + arr_B[0][1]);
	p7 = (arr_A[0][1] - arr_A[1][1]) * (arr_B[1][0] + arr_B[1][1]);
	arr_C[0][0] = p1 + p4 - p5 + p7;
	arr_C[0][1] = p3 + p5;
	arr_C[1][0] = p2 + p4;
	arr_C[1][1] = p1 - p2 + p3 + p6;
	cout << "\nThe Resultant Matrix:\n";
	cout << arr_C[0][0] << "\t";
	cout << arr_C[0][1] << endl;
	cout << arr_C[1][0] << "\t";
	cout << arr_C[1][1] << endl;
	getchar();
	getchar();
	return 0;
}