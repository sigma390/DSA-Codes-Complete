#include<bits/stdc++.h>
using namespace  std;


//pass by value
void pbv(int income1){
    income1 = income1 -0.1*income1;
    
}

//pass by referance
void pbr(int &incm2){
    incm2 = incm2 -0.1*incm2;
    
}





int main(){


    int income = 100;
    cout<<income<<endl;
    pbv(income);
    cout<<income<<endl;

    // pass by referance thing 
    
    int incm2 = 200;
    cout<<incm2<<endl;
    pbr(incm2);
    cout<<incm2<<endl;





    return 0;
} 

