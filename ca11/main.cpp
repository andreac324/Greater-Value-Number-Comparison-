//
//  main.cpp
//  ca11
//
//  Created by Andrea d Cazares on 9/15/24.
//
/*
#include <iostream>
using namespace std;
int main(){
    double num1,num2, largestVal;
    
    cout << "enter the first value \n";
    cin >> num1;
    
    cout << "enter the second value \n";
    cin >> num2;
    
    if (num1 > num2){
        largestVal = num1;
    }
    else{
        largestVal = num2;
    }
    
    cout<< "The largest value is: "<<largestVal<<endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main(){
    double num1,num2, largestVal;
    
    cout << "enter the first value \n";
    cin >> num1;
    
    cout << "enter the second value \n";
    cin >> num2;
    
    largestVal = (num1 > num2) ? num1 : num2;
    //if true evaluates after ?
    //if false evaluates after :
    
    cout<< "The largest value is: "<<largestVal<<endl;
    return 0;
}


