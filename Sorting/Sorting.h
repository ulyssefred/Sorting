#include <iostream>
#include <vector>
#include <string.h>
#include <map>
typedef struct node currentmap;
using namespace std;
int Paritition(vector<int>& A, int low, int high);
int Paritition(vector<currentmap>& A, int low, int high);
void QuickSort(vector<int>& A, int low, int high);
void QuickSort(vector<currentmap>& A, int low, int high);
void QuickSort(vector<int>& A);
void QuickSort(vector<int>& A, vector<int>& Auxilary);
void BubbleSort(vector<int>& A);
void BubbleSort(vector<int>& A, vector<int>& Auxilary);



