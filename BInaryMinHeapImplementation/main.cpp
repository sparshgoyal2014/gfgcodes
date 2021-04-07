#include <iostream>
#include <climits>

using namespace std;

class MinHeap{

    int heapSize;
    int capacity;
    int *arr;

public:
    MinHeap(int capacity){
        this->capacity = capacity;
        this->heapSize = 0;

        arr = new int[capacity];
    }

    int leftChild(int index){  // returns left child of the given index
        return (2*index + 1);
    }

    int rightChild(int index){
        return (2*index + 2);
    }

    int parent(int index){  // return parent index of the given child index
        return ((index - 1)/2);
    }

    void insertkey(int key);

    void minHeapify(int i){  // i'th index node may be faulty we need to fix the min heap.
        int lt = leftChild(i);
        int rt = rightChild(i);

        int smallest = i;

        if(lt < heapSize && arr[lt] <  arr[i]){
            smallest = lt;
        }

        if(rt < heapSize && arr[rt] < arr[smallest]){
            smallest = rt;
        }

        if(smallest != i){
            swap(arr[smallest], arr[i]);
            minHeapify(smallest);
        }

    }

    // iterative solution
    void minHeapifyIterative(int i){
        int smallest = i;

        int lt = leftChild(i);
        int rt =  rightChild(i);

        if(lt < heapSize && arr[lt] <  arr[i]){
            smallest = lt;
        }

        if(rt < heapSize && arr[rt] < arr[smallest]){
            smallest = rt;
        }


        while(smallest != i){

            swap(arr[smallest], arr[i]);

            i = smallest;

            lt = leftChild(i);
            rt = rightChild(i);

            if(lt < heapSize && arr[lt] <  arr[i]){
                smallest = lt;
            }

            if(rt < heapSize && arr[rt] < arr[smallest]){
                smallest = rt;
            }


        }

    }

    void minHipifyIterative2(int i){

        int smallest = i;

        while(i < heapSize){
            int lt = leftChild(i);
            int rt = rightChild(i);

            if(lt < heapSize && arr[lt] <  arr[i]){
                smallest = lt;
            }

            if(rt < heapSize && arr[rt] < arr[smallest]){
                smallest = rt;
            }


            if(smallest == i){
                return ;
            }

            swap(arr[smallest], arr[i]);


        }
    }

    void deleteKey(int index){
        decreaseKey(index, INT_MIN);
        extractMinimum();
    }

    void buildheap(int arr[], int size){  // given complete binary tree in the form of array convert that into heap

        for(int i=(size-2)/2; i>=0; i--){
            minHeapify(i, arr, size);
        }

    }



    void minHeapify(int index, int arr[], int size){
        int lt = leftChild(index);
        int rt = rightChild(index);

        int smallest = index;

        if(lt < size && arr[lt] <  arr[index]){
            smallest = lt;
        }

        if(rt < size && arr[rt] < arr[smallest]){
            smallest = rt;
        }

        if(smallest != index){
            swap(arr[smallest], arr[index]);
            minHeapify(smallest);
        }
    }




    int extractMinimum(){
        if(heapSize == 0){
            return -1;
        }

        int minElement = arr[0];

        swap(arr[0], arr[heapSize-1]);
        heapSize--;

        minHeapify(0);

    }

    void decreaseKey(int i, int x){
        arr[i] = x;

        while(i != 0 && arr[i] < arr[parent(i)]){
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }



    void maxHeapify(int arr[], int size, int i){
        int largest = i;

        int lt = leftChild(i);
        int rt = rightChild(i);

        if(lt < size && arr[lt] > arr[i]){
            largest = lt;
        }

        if(rt < size && arr[rt] > arr[largest]){
            largest = rt;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            maxHeapify(arr, size, largest);
        }
    }

    void buildMaxHeap(int arr[], int size){
        for(int i = (size-2)/2; i>=0; i--){
            maxHeapify(arr, size, i);
        }
    }

    void heapSort(int arr[], int size){
        buildMaxHeap(arr, size);

        for(int i=size-1; i>=1; i--){
            swap(arr[0], arr[i]);
            maxHeapify(arr, i, 0);
        }
    }

    void heapSort2(int arr[], int size){
        buildMaxHeap(arr, size);

        while(size > 1){
            swap(arr[0], arr[size-1]);
            size--;
            maxHeapify(arr, size, 0);
        }
    }



};

void MinHeap::insertkey(int key) {
    if(heapSize == capacity){
        cout << "Can't insert the key Heap is full" << endl;
        return ;
    }

    heapSize++;
    arr[heapSize-1] = key;


    int index = heapSize-1;

    while(index != 0 && arr[parent(index)] > key){
        swap(arr[parent(index)], arr[index]);
        index = parent(index);
    }


}


int main() {

    MinHeap minHeap = MinHeap(10);
    int arr[7] = {5,4,2,1,6,7,9};

    minHeap.heapSort2(arr, 7);

    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
