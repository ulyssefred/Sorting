#include "Sorting.h"
#include "FunctionalityTest.h"

int main()
{
    bool func_test_flag = false;/*functionality test flag, default false*/
    /*if functionality test flag is true, test Sorting library functionality*/
    if(func_test_flag)
    {
        FunctionalityTest test;
        int test_case_array_size;
        int test_number;
        cout << "input test functionality number" << endl;
        cin >> test_number;
        switch (test_number)
        {
        case 1:
            cout << "input test cast array size" << endl;
            cin >> test_case_array_size;
            test.Bubble_sort_function_test_without_auxiliary_array(test_case_array_size);
            break;
        case 2:
            cout << "input test cast array size" << endl;
            cin >> test_case_array_size;
            test.Bubble_sort_function_test_with_auxiliary_array(test_case_array_size);
            break;
        case 3:
            cout << "input test cast array size" << endl;
            cin >> test_case_array_size;
            test.Quicksort_function_test_without_auxiliary_array(test_case_array_size);
            break;
        case 4:
            cout << "input test cast array size" << endl;
            cin >> test_case_array_size;
            test.Quicksort_function_test_with_auxiliary_array(test_case_array_size);
        default:
            break;
        }
    }
    ///*error conditions*/
   /* vector<int> error_test_array = { 1, 2, 4, 3, 5 };
    vector<float> error_test_array1 = { 1., 3., 4., 5. };
    vector<char> error_test_array2 = { 'a', 'b', 'c', 'd' };
    vector<int> error_test_auxiliary = { 0, 0, 0, 0, 0 };
    vector<int> error_test_auxiliary1 = { 0, 0, 0, 0, 0, 0, 0 };*/
    ///*error input array type(not vector<int>)*/
    //BubbleSort(error_test_array1);
    //BubbleSort(error_test_array2, error_test_auxiliary);
    //QuickSort(error_test_array1);
    //QuickSort(error_test_array2, error_test_auxiliary);
    ///*error input argument number */
    //BubbleSort();
    //BubbleSort(error_test_array1, error_test_array2, error_test_auxiliary);
    //QuickSort();
    //QuickSort(error_test_array1, error_test_array2, error_test_auxiliary);
    ///*error auxiliary array size*/
    /*BubbleSort(error_test_array, error_test_auxiliary1);*/
    //QuickSort(error_test_array, error_test_auxiliary1);


    
    
}