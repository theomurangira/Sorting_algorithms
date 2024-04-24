#include<iostream>
#include<vector>
#include<random>

/** Implement the sorting algorithms below.
 Don't change the main function. You can define helper functions
 if you need to. 
 If you run the program now, it shoulprint : sorted:0
 As you implement the sorting algorithms,
  the sorted value increment by 1 for each sorting algorithm
  successfully implemented. 
  When all functions are correctly defined,
  your program should display: sorted:5
**/

template<typename T>
void bubbleSort(std::vector<T>& v)
{
    //your code goes here
      
}

template <typename T>
void insertionSort(std::vector<T>& v)
{
    
    //your code goes here

}


template <typename T>
void selectionSort (std::vector<T>& v)
{
    //Your code goes here

}

template <typename T>
void quickSort(std::vector<T>& v)
{
    //Your code goes here
}

template <typename T>
void mergeSort(std::vector<T>& v)
{
    //Your code goes here
}
template<typename T>
bool isSorted(const std::vector<T>& v )
{
    for(size_t i=0; i<v.size()-1;++i)
      if(v.at(i)>v.at(i+1)) return false;
    return true;
}
int main()
{
 std::vector<int> v1{23,45,12,7,6,9,3};
 std::vector<int> v3{4,3,2,1,7,8,9,6};
 std::vector<int> v4{3,6,1,7,9,8,2,4,5};
 std::vector<int> v5{22,44,33,11,66,55,88,77};
 std::vector<int> v2{9,2,3,1,7,8,6,4,5};
 bubbleSort(v1);
 insertionSort(v2);
 selectionSort(v3);
 quickSort(v4);
 mergeSort(v5);
 std::vector<std::vector<int>> vectors;
 vectors.push_back(v1);
 vectors.push_back(v2);
 vectors.push_back(v3);
 vectors.push_back(v4);
 vectors.push_back(v5);
 int sorted=0;
 for (auto v: vectors)
     if( isSorted(v)) ++sorted;
 std::cout<<"sorted :"<<sorted<<"\n";

}