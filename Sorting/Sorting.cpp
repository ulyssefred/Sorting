#include "Sorting.h"


typedef struct node
{
    int value;
    int index;
}valueindexmap;


int Paritition(vector<int>& A, int low, int high)
{
    int pivot = A[low];/*Record current sort value*/
    //Adjust pivot order
    while (low < high) {
        while (low < high && A[high] >= pivot) {
            --high;
        }
        A[low] = A[high];
        while (low < high && A[low] <= pivot) {
            ++low;
        }
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;/*return pivot position*/
}


int Paritition(vector<valueindexmap>& A, int low, int high)
{
    valueindexmap pivot = A[low];/*Record current sort struct pivot*/
    //Adjust pivot order
    while (low < high) {
        while (low < high && A[high].value >= pivot.value) {
            --high;
        }
        A[low] = A[high];
        while (low < high && A[low].value <= pivot.value) {
            ++low;
        }
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;/*return pivot position*/
}

void QuickSort(vector<int>& A, int low, int high)
{
    if (low < high) {
        int pivot = Paritition(A, low, high);
        /*Recursive sorting*/
        QuickSort(A, low, pivot - 1);
        /*Recursive sorting*/
        QuickSort(A, pivot + 1, high);
    }
}
void QuickSort(vector<valueindexmap>& A, int low, int high)
{
    if (low < high) {
        int pivot = Paritition(A, low, high);
        /*Recursive sorting*/
        QuickSort(A, low, pivot - 1);
        /*Recursive sorting*/
        QuickSort(A, pivot + 1, high);
    }
}

void QuickSort(vector<int>& A)
{

    int low = 0;/*record initial low boundary value*/
    int high = A.size()-1;/*record initial high boundary value*/
    QuickSort(A, low, high);/*call QuickSort implementation function*/
}


void QuickSort(vector<int>& A, vector<int>& Auxilary)
{
    if (A.size() != Auxilary.size()) {
        cout << "error Auxilary array size" << endl;
        return;
    }
    int low = 0;/*record initial low boundary value*/
    int high = A.size() - 1;/*record initial high boundary value*/
    vector<valueindexmap> maparray;/*declare valueindexmap vector mparray*/
    /*initial mparray*/
    for (int i = 0; i < A.size(); i++)
    {
        valueindexmap element;
        element.value = A[i];
        element.index = i;
        maparray.push_back(element);

    }
    QuickSort(maparray, low, high);
    /*assign value to auxiliary array*/
    for (int x = 0; x < A.size(); x++)
    {
        A[x] = maparray[x].value;
        Auxilary[x] = maparray[x].index;
    }
    
}

void BubbleSort(vector<int>& A)
{
    for (int i = 1; i < A.size(); i++) /*loop number*/
    {
        for(int j = 0; j<A.size()-i;j++)/*swap adjacent object order*/
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void BubbleSort(vector<int>& A, vector<int>& Auxilary)
{
    if (A.size() != Auxilary.size()) {
        cout << "error Auxilary array size" << endl;
        return;
    }
    vector<valueindexmap> maparray;/*declare valueindexmap vector mparray*/
    /*initial mparray*/
    for(int i = 0; i<A.size(); i++)
    {   
        valueindexmap element;
        element.value = A[i];
        element.index = i;
        maparray.push_back(element);
        
    }
    for (int j = 1; j < A.size(); j++) /*loop number*/
    {
        for (int k = 0; k < A.size() - j; k++)/*swap adjacent object order*/
        {
            if (maparray[k].value > maparray[k+1].value)
            {
                valueindexmap temp = maparray[k];
                maparray[k] = maparray[k + 1];
                maparray[k + 1] = temp;  
            }
        }
    }
    /*assign value to auxiliary array*/
    for (int x = 0; x < A.size(); x++) 
    {
        A[x] = maparray[x].value;
        Auxilary[x] = maparray[x].index;
    }
}
