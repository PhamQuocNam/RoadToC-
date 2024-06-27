#include <iostream>
using namespace std;
struct code{
    int x;
    int y;
};
void linearsearch(int a[], code b[], int n,int &c){
    
    for(int i=0;i<n;i++){
        int temp=a[i];
        int count=1;
        if(a[i]!=0){
        for(int j=i+1;j<n;j++){
            if(a[j]==temp){
                count++;
                a[j]=0;
            }
        }
        b[c].x=temp;
        b[c].y=count;
        c++;
        }
    }
}
void merge(code array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
 
    // Create temp arrays
    code *leftArray = new code[subArrayOne];
    code  *rightArray = new code[subArrayTwo];
 
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
 
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne].y > rightArray[indexOfSubArrayTwo].y) {
            array[indexOfMergedArray].x= leftArray[indexOfSubArrayOne].x;
            array[indexOfMergedArray].y= leftArray[indexOfSubArrayOne].y;
            indexOfSubArrayOne++;
        }
        else if(leftArray[indexOfSubArrayOne].y == rightArray[indexOfSubArrayTwo].y){
            if(leftArray[indexOfSubArrayOne].y <= rightArray[indexOfSubArrayTwo].y){
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
 

void mergeS(code array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeS(array, begin, mid);
    mergeS(array, mid + 1, end);
    merge(array, begin, mid, end);
}
void output(code a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i].x<<" "<<a[i].y<<'\n';
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    code b[n];
    int c=0;
    for(int i=0;i<n;i++) cin>>a[i];
    linearsearch(a,b,n,c);
    mergeS(b,0,c-1);
    output(b,c);
    return 0;
}