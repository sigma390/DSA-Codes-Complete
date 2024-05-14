#include<bits/stdc++.h>
#include"list.h"
using namespace std;



int main(){

    List l ;
    l.push_front(10);
    l.push_front(11);
    l.pus_back(12);
    l.Insert(123,1);


    Node*head = l.begin();
    while (head!=NULL)
    {
        cout<<head->getData()<<"->";
        head = head->next;
    }
    


    return 0;
}