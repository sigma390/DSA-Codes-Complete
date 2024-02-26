

#include<bits/stdc++.h>
using namespace std;

int main(){


    char para[1000];
    int n{0};
    cin>>n;
    cin.get();

    char largest[1000];
    int largest_len{0};

    while (n--)
    {
        cin.getline(para,1000);
        int len = strlen(para);
        if (len>largest_len)
        {
            largest_len = len;
            strcpy(largest,para);
        }
        

        
    }
    cout<<largest<<endl;
    




    return 0;
}