import java.lang.System;
import java.util.Scanner;

class selectionsort{
    public static void main(String args[]){

        int[] array = {2,1,5,3,7};
        int n = array.length;

        System.out.print("Unsorted list: ");

        for (int element: array){
            System.out.print(element+" ");
        }

        for(int i=0; i<n; i++){ // Outer loop to iterate through the entire array.
            int temp = i;  // Assume the current element at index i is the smallest.
            for(int j=i+1; j<n; j++){  // Inner loop to find the smallest element in the unsorted part of the array.
                if(array[temp]>array[j]){
                    temp = j;
                }
            }
            //Swap the found smallest element with the element at position i
            int temp_value = array[i];
            array[i] = array[temp];
            array[temp] = temp_value;
            

        }
        System.out.println();

        System.out.print("After sorting: ");
        for (int element: array){
            System.out.print(element+" ");
        }
    }
}