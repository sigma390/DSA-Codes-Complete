#include <bits/stdc++.h>
using namespace std;

int Max_subArray_sum (vector<int> arr){

    int n = arr.size();
    if(n<0||n==0){
        return 0;
    }

    int max_sum = 0;
    for( int i=0; i<n;i++){
        int sum = 0;
        for( int j=i+1;j<n;j++){
            sum = sum+arr[j];
            max_sum = max(sum, max_sum);

        }
    }

    return max_sum;



}




int main() {
    vector<int> arr {-1,2,3};
    cout<<Max_subArray_sum(arr);

    return 0;
}