#include<iostream>
#include<vector>
using namespace std;
class Maxheap{
    public:
    vector<int> heap;
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
    void bubbledown(){
        int i=0;
        int size=heap.size();
        while(i<size){
        int left=2*i+1;
        int right=2*i+2;
        int largest=i;
        if(left<size && heap[left]>heap[largest]){
            largest=left;
        }
        if(right<size && heap[right]>heap[largest]){
            largest=right;
        }if(largest!=i){
            swap(heap[i],heap[largest]);
            i=largest;
        }
        else{
            break;
        }
        }
    }
    void insert(int value){
        heap.push_back(value);
        bubbleheap(heap.size()-1);
    }
    void deletion(){
        swap(heap[0],heap[heap.size()-1]);
        heap.pop_back();
        bubbledown();

    }

}
int main(){

Maxheap h;
h.insert(3);
h.insert(5);
h.insert(1);
h.insert(9);
h.deletion();


}