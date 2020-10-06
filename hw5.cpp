#include <iostream>
#include <vector>
#include "hw5.h"

//void InsertHelper(std::vector<int> &vec, int n);
/*
* Pseudocode
* if empty vector
* return
* for j=0 to size-1
* for i=0 to size-1
* if vec[i] < vec[i+1]
* swap vec[i], vec[i+1]
*/
void BubbleSort(std::vector<std::string> &vec)
{
  if(vec.empty())
    return;
  
  for(int j = 0; j < vec.size()-1; j++)
    for(int i = 0; i < vec.size()-1; i++)
      if(vec[i].compare(vec[i+1]) > 0)
        swap(vec[i], vec[i+1]);
}

/*
* Pseudocode
* if n <= 1
* return
* recursively call insertion sort on v and n-1
* while j >= 0 and v at j > last
* set v[j+1] = v[j]
* decrement j
* outside while set v[j+1] = last
*/
void InsertionSort(std::vector<int> &v, int n)
{
  if(n <= 1)
    return;

  InsertionSort(v, n-1);

  int last = v[n-1];
  int j = n-2;

  while(j >= 0 && v[j] > last)
  {
    v[j+1] = v[j];
    j--;
  }
  v[j+1] = last;
}

/*
* Pseudocode
* split vector in 2 vectors
* populate 2 vectors with contents of original
* if l < r
* recursively split each vector in half
* merge back together
*/
void MergeSort(std::vector<std::string> &vec)
{
  int l = 0;
  int r = vec.size();

  std::vector<std::string> left;
  for(int i = 0; i < (r-l)/2; i++)
    left.push_back(vec[i]);
  std::vector<std::string> right;
  for(int i = (r-l)/2+1; i < r; i++)
    right.push_back(vec[i]);

  if (l < r)
  { 
    MergeSort(left);
    MergeSort(right); 
    MergeHelper(vec, left, right, l, r); 
  } 
}

/*
* Pseudocode
* while li < left size and ri < right size
* if word in left array at li < word in right 
* array at ri
* insert left into origianl vector increment li
* else insert right into original vector 
* increment ri
*/
void MergeHelper(std::vector<std::string> &v, std::vector<std::string> left, std::vector<std::string> right, int l, int r)
{ 
  int li = 0;
  int ri = 0;
  int k = l;
  while(li < left.size() && ri < right.size())
  {
    if(left[li].compare(right[ri]) < 0)
    {  
      v[k] = left[li];
      li++;
    }
    else
    {
      v[k] = right[ri];
      ri++;
    }
    k++;
  }
}
