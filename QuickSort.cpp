#include <iostream> 
#include <algorithm>

int Partition(int *Table, int a, int b) 
{
    int pivot=Table[b] ; 
    int i = a-1 ; 

    for(int j = a ; j <= b-1 ; j++)
    {
        if(Table[j] <= pivot)
        {
            i++ ; 
            std::swap(Table[i],Table[j]) ; 
        }
    }
    std::swap(Table[i+1],Table[b]) ; 
    return (i+1) ; 
}

void QuickSortRecursive(int T[],int a,int b)
{
    if (a<b)
    {
        int m=Partition(T,a,b);
        QuickSortRecursive(T,a,m-1);
        QuickSortRecursive(T,m+1,b) ; 
    }
}

void Display(int *T , int b)
{
    for(int i=0 ; i < b ; i++)
    {
        std::cout << T[i] << " "  ; 
    }
    std::cout << "\n" << "------------------------------------" << std::endl ; 
}

void QuickSort(int *T,int size)
{
    std::cout << "Before QuickSort : " << std::endl ; 
    Display(T,size) ;
    QuickSortRecursive(T,0,size-1); 
    std::cout << "After QuickSort : " << std::endl ; 
    Display(T,size) ; 
}

int main()
{
    int T[8] = {1,2,1,4,1,6,8,9} ; 
    QuickSort(T,8) ; 
}
