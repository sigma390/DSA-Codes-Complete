#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack{
    vector<T>arr;
    public: 
        void Push(T data){
            arr.push_back(data);
        }
        void Pop(){
            arr.pop_back();
        }
        T top(){
            return arr[arr.size()-1];
        }
        bool isEmpty(){
            return arr.size()==0;
        }

};