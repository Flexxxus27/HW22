#include <iostream>

void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void swap(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void power(int* num1, int num2) {
	int tmp = *num1;
	for (int i = 1; i < num2; i++) 
		*num1 *= tmp;
}


int main() {
	setlocale(0, "");
	
	//задание 1.
	std::cout << "Задание 1.\n\n";
	const int size = 10;
	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "Массив:\n";
	print_arr(arr, size);
	int* parr = &arr[0];
	for (int i = 0; i < size; i +=2) {
		if (*(parr + i) % 2 > 0)
			swap(parr + i, parr + i + 1);
	}
	print_arr(arr, size);

	//Задание 2.
	std::cout << "Задание 2\n\n";
	int n = 10;
	std::cout << "Число возведенное в сепень -> ";
	power(&n, 3);
	std::cout << n << std::endl;






	return 0;
}