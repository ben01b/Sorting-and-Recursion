#include <iostream>
#include <vector>
#include "hw5.h"

void InsertHelper(std::vector<int> &vec, int n);

void BubbleSort(std::vector<std::string> &vec)
{
  bool swapped = true;
  for(int j = 0; j < vec.size()-1; j++)
    for(int i = 0; i < vec.size()-1; i++)
      if(vec[i].compare(vec[i+1]) > 0)
        swap(vec[i], vec[i+1]);
}

void InsertionSort(std::vector<int> &v)
{
  //InsertHelper(v, v.size());
  return;
}

/*void InsertHelper(std::vector<int> &vec, int n)
{
  if(n <= 1)
    return;

  InsertHelper(vec, n-1);

  int last = vec[n-1];
  int j = n-2;

  while(j >= 0 && vec[j] > last)
  {
    vec[j+1] = vec[j];
    j--;
  }
  vec[j+1] = last;
}*/

void MergeSort(std::vector<std::string> &vec)
{
  /*int l = 0;
  int r = vec.size();

  if (l < r)
  { 
    int m = l + (r - l) / 2; 
  
    MergeSort(vec, l, m); 
    MergeSort(vec, m + 1, r); 
  
    merge(arr, l, m, r); 
  } */
}

void MergeHelper(std::vector<std::string> &v, int l, int m, int r)
{
  /*int n1 = m - l + 1; 
  int n2 = r - m; 
  std::string L[n1], R[n2]; 
  
  for (int i = 0; i < n1; i++) 
    L[i] = v[l + i]; 
  for (int j = 0; j < n2; j++) 
    R[j] = v[m + 1 + j]; 
  
  int i = 0;
  int j = 0;
  int k = l;

  while (i < n1 && j < n2)
  { 
    if (L[i] <= R[j])
    { 
        v[k] = L[i]; 
        i++; 
    } 
    else 
    { 
      v[k] = R[j]; 
      j++; 
    } 
      k++; 
  } 
  
    while (i < n1) { 
        v[k] = L[i]; 
        i++; 
        k++; 
    }
  
    while (j < n2) { 
        v[k] = R[j]; 
        j++; 
        k++; 
    }*/
}
