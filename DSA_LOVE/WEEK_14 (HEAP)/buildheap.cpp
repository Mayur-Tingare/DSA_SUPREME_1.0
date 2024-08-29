#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
        int index=i;
        int leftindex=2*i;
        int rigghtindex=2*i+1;
        int largest=index;


        if(leftindex<=n && arr[leftindex]>arr[largest]){            
            largest=leftindex;
        }

        if(rigghtindex<=n && arr[rigghtindex]>arr[largest]){         
            largest=rigghtindex;
        }

        if(index!=largest){
            swap(arr[index],arr[largest]);
            index=largest;
            heapify(arr,n,index);
        }

    }

    void buildheap(int arr[],int n){
        for(int i=n/2;i>0;i--){
                heapify(arr,n,i);
            }
        }

    void heapsort(int arr[],int n){
         

        while(n!=1){
            int index=n;
            swap(arr[index],arr[1]);
            n--;
            heapify(arr,n,1);
        }
    }


int main()
{

    int arr[]={-1,12,15,13,11,14};
    int n=5;
    
    buildheap(arr,n);

     for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    heapsort(arr,n);
    cout<<"After HeapSort"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}