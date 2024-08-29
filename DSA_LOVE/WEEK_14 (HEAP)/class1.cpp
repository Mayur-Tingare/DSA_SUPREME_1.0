#include <bits/stdc++.h>
using namespace std;
class heap{
    public:
    
    int size;
    int arr[101];



    heap(){
        size=0;
    }
    ~heap(){

    }

    void insert(int value){
        size=size+1;
        int index=size;
        arr[index]=value;

        while(index>1){
            int parent=index/2;
            if(arr[index]>arr[parent]){
                
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                break;
            }

        }


    }

    void deletenode(){

        // replace root with end node

        int index=1;
        swap(arr[index],arr[size]);

        size--;

        while(index<size){
            int largest=index;
            int left=index*2;
            int right=index*2+1;
            if(left<size && arr[index]<arr[left]){
                largest=left;
            }
            if(right<size && arr[index]<arr[right]){
                largest=right;
            }

            if(largest==index){
                return;
            }
            else{
                swap(arr[index],arr[largest]);
                index=largest;
            }


        }
    }

    void heapify(int arr[],int n,int i){
        int index=i;
        int leftindex=2*i;
        int rigghtindex=2*i+1;
        int largest=index;


        if(leftindex<n && arr[leftindex]>arr[largest]){
            swap(arr[leftindex],arr[largest]);
        }
        if(rigghtindex<n && arr[rigghtindex]>arr[largest]){
            swap(arr[rigghtindex],arr[largest]);
        }
        if(index!=largest){
            swap(arr[index],arr[largest]);
            index=largest;
            heapify(arr,n,index);
        }

    }

    void buildheap(int arr[],int n){
        for(int i=n/2;i>=1;i--){
                heapify(arr,n,i);
            }
        }


};

int main()
{
    heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=40;
    h.arr[5]=45;
    h.size=5;


    cout<<"Printing the heap"<<endl;

    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl<<endl;

    h.insert(110);

     cout<<"Printing the heap After Insertion"<<endl;

    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl<<endl;


    h.deletenode();

    cout<<"Heap Aftre Deletion"<<endl;

    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }

    h.heapify(h.arr,h.size,0);

    for(int i=0;i<h.size;i++){
        cout<<h.arr[i]<<" ";
    }

    int arr[]={-1,12,15,13,11,14};
    int n=5;
    
    h.buildheap(arr,n);

     for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }



    
    


    return 0;
}