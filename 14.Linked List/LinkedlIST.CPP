#include<bits/stdc++.h>
#include"list.h"
using namespace std;
 List l ;
void PrintLL(){

    //printer Function
    Node*head = l.begin();
    while (head!=NULL)
    {
        cout<<head->getData()<<"->";
        head = head->next;
    }
    


}

int main(){

   
    l.push_front(10);
    l.push_front(11);
    l.pus_back(12);
    l.Insert(123,1);
    cout<<l.Search(10)<<endl;
    cout<<l.recursiveSearch(10)<<endl;
    PrintLL();
    l.Pop_Front();
    PrintLL();

    


    return 0;
}