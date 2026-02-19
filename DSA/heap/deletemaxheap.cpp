#include<iostream>
using namespace std;
class Maxheap{
    public:
    void bubbleheap(int index){
        while(index>0){
        //find the parent
        int parent=(index-1)/2;
        if(heap[index]>heap[parent]){
            swap(heap[index],heap[parent]);
            index=parent;
        }
        else{
            break;
        }
        }
    }
    void
