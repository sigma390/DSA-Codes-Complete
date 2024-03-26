


#include<bits/stdc++.h>
using namespace std;

// to calculate total marks 

int calcTotalMrks(vector<int>marks)
{
    return marks[0]+ marks[1]+ marks[2];
}


bool compare(pair<string, vector<int>>s1,pair<string, vector<int>>s2){

    vector<int>m1 = s1.second;
    vector<int>m2 = s2.second;
    return calcTotalMrks(m1)> calcTotalMrks(m2);

}




int main(){

    vector<pair<string,vector<int>>> Student_marks = {
        {"Omkar",{100,95,98}},
        {"Anisha",{78,98,65}},
        {"Rohan",{77,56,89}}
    };

    sort(Student_marks.begin(),Student_marks.end(),compare);
    for (auto s : Student_marks)
    {
        cout<<s.first<<"-"<<calcTotalMrks(s.second)<<endl;
    }

     return 0;
    

}