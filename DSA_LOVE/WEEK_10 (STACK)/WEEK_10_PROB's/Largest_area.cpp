#include <bits/stdc++.h>
using namespace std;

vector<int> prevsmaller(vector<int>&v){
    vector<int>ans1(v.size());

    stack<int>st;
    st.push(-1);

    
    for(int i=0;i<v.size();i++){
        int curr=v[i];
        while(st.top()!=-1 && v[st.top()]>=curr){
            st.pop();
        }
        ans1[i]=st.top();
        st.push(i);


    }
   return ans1;
}

vector<int> nextsmaller(vector<int>&v){
    vector<int>ans(v.size());

    stack<int>st;

    // yaha size push kro -1 nahi galat aa jaega width wrna
    
    st.push(v.size());

    
    for(int i=v.size()-1;i>=0;i--){
        int curr=v[i];
        while(st.top()!=-1 && v[st.top()]>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);


    }
    return ans;
}

int getreactangulararea(vector<int>&heights){
    
    vector<int>prev=prevsmaller(heights);

    vector<int>next=nextsmaller(heights);

    int maxarea=INT_MIN;

    for(int i=0;i<heights.size();i++){
        int length=heights[i];

        if(next[i] == -1){
            next[i]=heights.size();
        }

        int width=next[i]-prev[i]-1;

        int area=length*width;

        maxarea=max(maxarea,area);
    }
    return maxarea;

}


int main()
{
    vector<int>heights;
    heights.push_back(2);
    heights.push_back(1);
    heights.push_back(5);
    heights.push_back(6);
    heights.push_back(2);
    heights.push_back(3);

    cout<<"Ans Is :"<<getreactangulararea(heights)<<endl;
    
    
     

    return 0;
}