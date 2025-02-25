#include <iostream> //include the iostream library for the input output operations
using namespace std; // Use the standard namespace to avoid writing 'std::' before each standard function.

int main(){
    int unsorted_array[] = {2,1,5,4,3};
    int n = size(unsorted_array);
    cout << "Unsorted array: ";
   
    for (int i=0; i<5; i++){
        cout << unsorted_array[i]<<" ";
    }
    cout<<endl;

    cout<< "Sorted array: ";
    for(int i=0; i<n; i++){ // Outer loop to iterate through the entire array.
        int temp =i;   // Assume the current element at index i is the smallest.
        for (int j=i+1; j<n; j++){   // Inner loop to find the smallest element in the unsorted part of the array.
            if(unsorted_array[temp]>unsorted_array[j]){
                temp = j;
            }
            else{
                continue;
            }
        }
         // Swap the found smallest element with the element at index 'i'.
        swap(unsorted_array[temp],unsorted_array[i]);
    }

    for (int i=0; i<5; i++){
        cout << unsorted_array[i]<<" ";
    }

}


