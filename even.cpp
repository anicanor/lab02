//even.cpp
//Nicanor, Aaron
//anicanor
#include<iostream>

using namespace std;

int main(){
    
    int num;
    bool all_even = true;

    while (cin>>num){
        
        if (num %2 != 0){
            
            all_even = false;
        
        }
    
    }

    if (all_even == false){

        cerr << "not all even" << endl;

    }else{

        cout << "all even" << endl;

    }

    return 0;

}
