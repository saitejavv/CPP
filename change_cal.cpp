#include<iostream>
using namespace std;

int main(){
    
    int cents{};
    int const normal{0};
    int const dollar{100};
    int const quarter{25};
    int const dime{10};
    int const nickel{5};
    int const penny{1};

    cout << "Enter the cents: " <<endl;
    
    
    cin >> cents;
    cout<<"ok "<< (cents>normal) << endl;
    
    
    cout <<"The change "<< endl;
    int dolc{};
    int dolc2{};
    dolc=cents/dollar;
    dolc2=cents%dollar;
    
    int quat{};
    int quat2{};
    quat= dolc2/quarter;
    quat2 = cents%quarter;
    
    int dim{};
    int dim2{};
    dim = quat2/dime;
    dim2 = cents%dime;
    
    int nic{};
    int nic2{};
    nic = dim2/nickel;
    nic2 = cents%nickel;
    
    int pen{};
    pen = nic2/penny;
    
    cout << "DOLLARS :" << dolc<<endl;
    
    cout << "Quaters :" << quat <<endl;
    cout << "dime : " << dim <<endl;
    cout << "nickel :" << nic <<endl;
    cout << "penny " << pen <<endl; 
    
    
    }
