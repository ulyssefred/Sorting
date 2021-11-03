#include "Sorting.h"


int main()
{
    vector<int> a = {1, 2, 4, 3, 5, 7, 0, 9, 10, 1};/*testlist example*/
    vector<int> auxiliary_array(a.size());
    QuickSort(a);
    for(auto x: a)
    {
        cout << x << endl;
    
    }
    return 0;
}