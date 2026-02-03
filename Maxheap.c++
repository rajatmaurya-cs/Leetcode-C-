#include<iostream>
#include<vector>
using namespace std;
class MaxHeap{
    int *arr ;
    int size ;
    int total_size;
public :
MaxHeap(int n){
    arr = new int[n];
    size  = 0 ;
    total_size = n ;}
   
   
    void insert(int value){
        if(size == total_size) {
            cout<< " Heap overflow occured \n";
            return ;
        }
        arr[size] = value ;
        int index = size;
        size++;
        while(index>0 && arr[(index-1)/2]<arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        }

    }

    void display(){
        for(int i = 0 ; i < size ; i++){
            cout<< arr[i] << " ";
        }
        cout<<endl;
    }
    void HeapiFy(int index ){
        int largest = index ;
        int left = 2*index+1; 
        int right = 2*index+2;
        if(left<size && arr[left]>arr[largest]) largest = left;
        if(right<size && arr[right]>arr[largest]) largest = right;
        if(largest!=index){
            swap(arr[index],arr[largest]);
            HeapiFy(largest);
        }

    }
    void delete_Node(){
        if(size==0){
            cout<<" Heap is underflow";
            return ;
        }
        cout<< arr[0] <<" Is Delelted\n";
        arr[0] = arr[size-1];
        size--;
        HeapiFy(0);
    }



};


int main(){
    MaxHeap H1 (10);
    H1.insert(10);
    H1.insert(4);
    H1.insert(8);
    H1.insert(3);
    H1.insert(2);
    H1.insert(6);
    H1.insert(7);
    H1.insert(1);
    H1.display();
    H1.delete_Node();
    H1.display();


}