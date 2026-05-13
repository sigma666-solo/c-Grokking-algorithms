#include <iostream>
using namespace std;

int binary_search(int size, int arr[], int item)
{
    int low=0;
    int high=size - 1;

    while (low<=high)
    {
        int mid =(low+high) / 2;
        int guess = arr[mid];

        if (guess==item)
        {
            return mid;
        }
        else if (guess>item)
        {
            high=mid-1;
        }
        else{low = mid +1;}
                
    }

    return -1;

}

int main()
{
    const int maxSize=5;
    int myArray[maxSize]={1, 3, 5, 7, 9};

    cout<<binary_search(5,myArray,3)<<"\n";//номер в массиве(начинается с 0)
    cout<<binary_search(5,myArray,-1);// null
}