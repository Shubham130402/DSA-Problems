package com.company;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] arr= {1,12,3,4,233,21,2,34,4};
        selectionsort(arr, arr.length, 0,arr[0]);
        System.out.println(Arrays.toString(arr));
    }

    //selection sort question by the use of recursion
    public static void selectionsort(int[] arr, int row, int col,int max) {
        if (row == 0) {
            return;
        }
        if(row>col){
            if(arr[col]>arr[max]){
                selectionsort(arr,row,col+1,col);
            }
            else{
                selectionsort(arr,row,col+1,max);
            }
        } else {
            //swap
           int temp = arr[max];
            arr[max]= arr[row-1];
            arr[row-1] = temp;

            selectionsort(arr,row-1,0,0 );
        }
    }
