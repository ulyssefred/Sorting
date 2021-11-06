#include "FunctionalityTest.h"

void FunctionalityTest::Bubble_sort_function_test_without_auxiliary_array(int array_size)
{	
	srand(time(0));
	vector<int> test_case_array(array_size);
	/*generate random test case array*/
	for (int i = 0; i < array_size; i++) 
	{
		test_case_array[i] = rand();
	}
	/*print original test case array*/
	for (int j = 0; j < array_size; j++) {
		cout <<setw(10)<< test_case_array[j]<<", ";
	}
	cout << endl;
	/*sort*/
	BubbleSort(test_case_array);
	/*print sorted test case array*/
	for (int j = 0; j < array_size; j++) {
		cout << setw(10) << test_case_array[j] << ", ";
	}
	cout << endl;
}

void FunctionalityTest::Bubble_sort_function_test_with_auxiliary_array(int array_size)
{
	srand(time(0));
	vector<int> test_case_array(array_size);
	/*generate test case auxiliary array*/
	vector<int> test_case_auxiliary_array(array_size);
	/*generate random test case array*/
	for (int i = 0; i < array_size; i++)
	{
		test_case_array[i] = rand();
	}
	/*print original test case array*/
	for (int j = 0; j < array_size; j++) {
		cout << setw(10) << test_case_array[j] << ", ";
	}
	cout << endl;
	/*sort*/
	BubbleSort(test_case_array, test_case_auxiliary_array);
	/*print sorted test case array*/
	for (int k = 0; k < array_size; k++) {
		cout << setw(10) << test_case_array[k] << ", ";
	}
	cout << endl;
	
	/*print sorted test case array original position*/
	for (int w = 0; w < array_size; w++) {
		cout << setw(10) << test_case_auxiliary_array[w]<< ", ";
	}
	cout << endl;

}

void FunctionalityTest::Quicksort_function_test_without_auxiliary_array(int array_size)
{
	srand(time(0));
	vector<int> test_case_array(array_size);
	/*generate random test case array*/
	for (int i = 0; i < array_size; i++)
	{
		test_case_array[i] = rand();
	}
	/*print original test case array*/
	for (int j = 0; j < array_size; j++) {
		cout << setw(10) << test_case_array[j] << ", ";
	}
	cout << endl;
	/*sort*/
	QuickSort(test_case_array);
	/*print sorted test case array*/
	for (int j = 0; j < array_size; j++) {
		cout << setw(10) << test_case_array[j] << ", ";
	}
	cout << endl;
}

void FunctionalityTest::Quicksort_function_test_with_auxiliary_array(int array_size)
{
	srand(time(0));
	vector<int> test_case_array(array_size);
	/*generate test case auxiliary array*/
	vector<int> test_case_auxiliary_array(array_size);
	/*generate random test case array*/
	for (int i = 0; i < array_size; i++)
	{
		test_case_array[i] = rand();
	}
	/*print original test case array*/
	for (int j = 0; j < array_size; j++) {
		cout << setw(10) << test_case_array[j] << ", ";
	}
	cout << endl;
	/*sort*/
	QuickSort(test_case_array, test_case_auxiliary_array);
	/*print sorted test case array*/
	for (int j = 0; j < array_size; j++) {
		cout << setw(10) << test_case_array[j] << ", ";
	}
	cout << endl;
	/*print sorted test case array original position*/
	for (int k = 0; k < array_size; k++) {
		cout << setw(10) << test_case_auxiliary_array[k] << ", ";
	}
	cout << endl;
}
