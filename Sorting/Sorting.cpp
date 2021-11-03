#include "Sorting.h"
typedef struct node
{
    int value;
    int index;
}currentmap;

int Paritition(vector<int>& A, int low, int high)
{
    int pivot = A[low];
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
    return low;
}
int Paritition(vector<currentmap>& A, int low, int high)
{
    currentmap pivot = A[low];
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
    return low;
}

void QuickSort(vector<int>& A, int low, int high)
{
    if (low < high) {
        int pivot = Paritition(A, low, high);
        QuickSort(A, low, pivot - 1);
        QuickSort(A, pivot + 1, high);
    }
}
void QuickSort(vector<currentmap>& A, int low, int high)
{
    if (low < high) {
        int pivot = Paritition(A, low, high);
        QuickSort(A, low, pivot - 1);
        QuickSort(A, pivot + 1, high);
    }
}

void QuickSort(vector<int>& A)
{
    int low = 0;
    int high = A.size()-1;
    QuickSort(A, low, high);
}


void QuickSort(vector<int>& A, vector<int>& Auxilary)
{
    int low = 0;
    int high = A.size() - 1;
    vector<currentmap> maparry;
    for (int i = 0; i < A.size(); i++)
    {
        currentmap element;
        element.value = A[i];
        element.index = i;
        maparry.push_back(element);

    }
    QuickSort(maparry, low, high);
    for (int x = 0; x < A.size(); x++)
    {
        Auxilary[x] = maparry[x].index;
    }
    
}

void BubbleSort(vector<int>& A)
{
    for (int i = 1; i < A.size(); i++) 
    {
        for(int j = 0; j<A.size()-i;j++)
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
    vector<currentmap> maparry;
    for(int i = 0; i<A.size(); i++)
    {   
        currentmap element;
        element.value = A[i];
        element.index = i;
        maparry.push_back(element);
        
    }
    for (int j = 1; j < A.size(); j++) 
    {
        for (int k = 0; k < A.size() - j; k++)
        {
            if (maparry[k].value > maparry[k+1].value)
            {
                currentmap temp = maparry[k];
                maparry[k] = maparry[k + 1];
                maparry[k + 1] = temp;  
            }
        }
    }
    for (int x = 0; x < A.size(); x++) 
    {
        Auxilary[x] = maparry[x].index;
    }
}
