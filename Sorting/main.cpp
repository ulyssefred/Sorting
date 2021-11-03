#include "Sorting.h"


int main()
{
    vector<int> a = {1, 2, 4, 3, 5, 7, 0, 9, 10, 1};/*testlist*/
    vector<int> auxiliary_array(a.size());
    QuickSort(a, auxiliary_array);
    for(auto x: auxiliary_array)
    {
        cout << x << endl;
    
    }
    return 0;
}