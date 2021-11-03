#include <iostream>
#include <vector>
#include <string.h>
#include <map>

//define struct valueindexmap to store value and it's original index
typedef struct node valueindexmap;
using namespace std;
//Paritition function which accpet vector array, low boundary, 
//high boundary, be defined to abjust array order, return sorted position
int Paritition(vector<int>& A, int low, int high);
//Paritition function which accpet vector<valueindexmap> array, 
//low boundary, high boundary, be defined to abjust array order, return sorted position
int Paritition(vector<valueindexmap>& A, int low, int high);
//QuickSort implementation program
void QuickSort(vector<int>& A, int low, int high);
//QuickSort implementation program
void QuickSort(vector<valueindexmap>& A, int low, int high);
//QuickSort main function, receive input array
void QuickSort(vector<int>& A);
//QuickSort main function, receive input array and auxilary array
void QuickSort(vector<int>& A, vector<int>& Auxilary);
//BubbleSort main function, receive input array
void BubbleSort(vector<int>& A);
//BubbleSort main function, receive input array and auxilary array
void BubbleSort(vector<int>& A, vector<int>& Auxilary);



