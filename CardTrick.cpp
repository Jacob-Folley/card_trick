//============================================================================
// Name        : CardTrick.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10, 11, 12, 13, 14, 15, 16 , 17, 18, 19, 20, 21};
	int arr1[7];
	int arr2[7];
	int arr3[7];
	int start;
	int pile;
	char answer;



	cout << "Think of one of these numbers: " << endl;
	for (int num=0; num<21; num++){
		cout <<  arr[num] << " ";
	}
	cout << endl;

	cout  << "Press 0 To Play: ";
	cin >> start;

	if (start == 0){
for (int j = 0; j<3; j++){
	// Split Arrays
	/*for (int i = 0; i < 21; i++){
		arr1[i] = arr[i+3];
	} */
	arr1[0] = arr[0];
	arr1[1] = arr[3];
	arr1[2] = arr[6];
	arr1[3] = arr[9];
	arr1[4] = arr[12];
	arr1[5] = arr[15];
	arr1[6] = arr[18];


	cout << endl;

	/*for (int i = 1; i < 21; i++){
			arr2[i] = arr[i+3];
		} */
	arr2[0] = arr[1];
	arr2[1] = arr[4];
	arr2[2] = arr[7];
	arr2[3] = arr[10];
	arr2[4] = arr[13];
	arr2[5] = arr[16];
	arr2[6] = arr[19];
	/*for (int i = 2; i < 21; i++){
			arr3[i] = arr[i+3];
		} */
	arr3[0] = arr[2];
	arr3[1] = arr[5];
	arr3[2] = arr[8];
	arr3[3] = arr[11];
	arr3[4] = arr[14];
	arr3[5] = arr[17];
	arr3[6] = arr[20];

	// print arrays
	cout << "Pile 1: ";
	for (int num=0; num<7; num++){
		cout <<  arr1[num] << " ";
			}
	cout << endl;

	cout << "Pile 2: ";
	for (int num1=0; num1<7; num1++){
		cout <<  arr2[num1] << " ";
			}
	cout << endl;

	cout << "Pile 3: ";
	for (int num2=0; num2<7; num2++){
		cout <<  arr3[num2] << " ";
			}
		cout << endl;

		cout << endl;
	cout << "What Pile is your number in? (1/2/3): ";
	cin >> pile;

	if (pile == 1){
		arr[0] = arr2[0];
		arr[1] = arr2[1];
		arr[2] = arr2[2];
		arr[3] = arr2[3];
		arr[4] = arr2[4];
		arr[5] = arr2[5];
		arr[6] = arr2[6];

		arr[7] = arr1[0];
		arr[8] = arr1[1];
		arr[9] = arr1[2];
		arr[10] = arr1[3];
		arr[11] = arr1[4];
		arr[12] = arr1[5];
		arr[13] = arr1[6];

		arr[14] = arr3[0];
		arr[15] = arr3[1];
		arr[16] = arr3[2];
		arr[17] = arr3[3];
		arr[18] = arr3[4];
		arr[19] = arr3[5];
		arr[20] = arr3[6];

	} else if (pile == 2){
		arr[0] = arr1[0];
		arr[1] = arr1[1];
		arr[2] = arr1[2];
		arr[3] = arr1[3];
		arr[4] = arr1[4];
		arr[5] = arr1[5];
		arr[6] = arr1[6];

		arr[7] = arr2[0];
		arr[8] = arr2[1];
		arr[9] = arr2[2];
		arr[10] = arr2[3];
		arr[11] = arr2[4];
		arr[12] = arr2[5];
		arr[13] = arr2[6];

		arr[14] = arr3[0];
		arr[15] = arr3[1];
		arr[16] = arr3[2];
		arr[17] = arr3[3];
		arr[18] = arr3[4];
		arr[19] = arr3[5];
		arr[20] = arr3[6];

	} else if (pile == 3){
		arr[0] = arr1[0];
		arr[1] = arr1[1];
		arr[2] = arr1[2];
		arr[3] = arr1[3];
		arr[4] = arr1[4];
		arr[5] = arr1[5];
		arr[6] = arr1[6];

		arr[7] = arr3[0];
		arr[8] = arr3[1];
		arr[9] = arr3[2];
		arr[10] = arr3[3];
		arr[11] = arr3[4];
		arr[12] = arr3[5];
		arr[13] = arr3[6];

		arr[14] = arr2[0];
		arr[15] = arr2[1];
		arr[16] = arr2[2];
		arr[17] = arr2[3];
		arr[18] = arr2[4];
		arr[19] = arr2[5];
		arr[20] = arr2[6];
	}
}
cout << "Your number is: " << arr[10] << endl;
cout << "Is this your number? (y/n): ";
cin << answer;
	}
}
