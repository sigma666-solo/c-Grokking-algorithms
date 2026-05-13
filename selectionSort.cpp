#include<iostream>
using namespace std;
#include <string>

void sorting(int array[],int size){

    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if (array[j]<array[min]){
                min=j;
            }
        }
        swap(array[i],array[min]);
    }
}

int main()
{
    int array[8] = {4,2,1,3,2,1,3,6};

    sorting(array,8);
    for (int i=0;i<8;i++)
    {
            cout<<array[i];
    }
}