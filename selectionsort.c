#include<stdio.h>
#include<conio.h>
int main(){
    int i , j , temp ;
    int min , loc ;
    int arr[]= {12, 6 ,8, 15 , 7 , 9 , 16};
    int n = 7;
    for (i = 0 ; i < n ; i++){
        min = arr[i];
        loc = i ;
        {
            for (j = i+1 ; j < n ; j++)
            {
                if ( arr[j] >  min){
                    min = arr[j];
                    loc = j;
                }
                if (loc != 0 ){
                   temp = arr[i];
                   arr[i] = arr[loc];
                   arr[loc] = temp;
                }
            }
        }
    }
    for (i = 0 ; i < n ; i ++){
        printf("%d ",arr[i] );
    }
} 