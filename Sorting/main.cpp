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
        cout << "input test cast array size" << endl;
        cin >> test_case_array_size;
        test.Bubble_sort_function_test_without_auxiliary_array(test_case_array_size);
        test.Bubble_sort_function_test_with_auxiliary_array(test_case_array_size);
        test.Quicksort_function_test_without_auxiliary_array(test_case_array_size);
        test.Quicksort_function_test_with_auxiliary_array(test_case_array_size);
    }
    

}