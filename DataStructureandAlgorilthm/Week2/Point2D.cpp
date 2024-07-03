#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
struct Point{
   int x;
   int y;
};
void merge(Point array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
 
    // Create temp arrays
    Point *leftArray = new Point[subArrayOne];
    Point  *rightArray = new Point[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (int i = 0; i < subArrayOne; i++){
        leftArray[i].x = array[left + i].x;
        leftArray[i].y = array[left+i].y;
    }
    for (int j = 0; j < subArrayTwo; j++){
        rightArray[j].x = array[mid + 1 + j].x;
        rightArray[j].y= array[mid+1+j].y;
    }
    int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne].x < rightArray[indexOfSubArrayTwo].x) {
            array[indexOfMergedArray].x= leftArray[indexOfSubArrayOne].x;
            array[indexOfMergedArray].y= leftArray[indexOfSubArrayOne].y;
            indexOfSubArrayOne++;
        }
        else if(leftArray[indexOfSubArrayOne].x == rightArray[indexOfSubArrayTwo].x){
            if(leftArray[indexOfSubArrayOne].y >= rightArray[indexOfSubArrayTwo].y){
            array[indexOfMergedArray].x= leftArray[indexOfSubArrayOne].x;
            array[indexOfMergedArray].y= leftArray[indexOfSubArrayOne].y;
            indexOfSubArrayOne++;
            }
            else{
            array[indexOfMergedArray].x= rightArray[indexOfSubArrayTwo].x;
            array[indexOfMergedArray].y= rightArray[indexOfSubArrayTwo].y;
            indexOfSubArrayTwo++;
            }
        }
        else {
            array[indexOfMergedArray].x= rightArray[indexOfSubArrayTwo].x;
            array[indexOfMergedArray].y= rightArray[indexOfSubArrayTwo].y;
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray].x= leftArray[indexOfSubArrayOne].x;
        array[indexOfMergedArray].y= leftArray[indexOfSubArrayOne].y;
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray].x= rightArray[indexOfSubArrayTwo].x;
         array[indexOfMergedArray].y= rightArray[indexOfSubArrayTwo].y;
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
 
// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeS(Point array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeS(array, begin, mid);
    mergeS(array, mid + 1, end);
    merge(array, begin, mid, end);
}
void output(Point a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i].x<<" "<<a[i].y<<'\n';
    }
}
int main(){
    int n; cin>>n;
    Point a[n+1];
    for(int i=0;i<n;i++){ 
    cin>>a[i].x;
    cin>>a[i].y;
   }
    mergeS(a,0,n-1);
    output(a,n);
    return 0;
}
