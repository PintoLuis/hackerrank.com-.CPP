#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int nr;
    
    cin >> nr;
 
    if (nr==1)
        cout << "one";
    else if(nr==2)
        cout << "two";
    else if(nr==3)
        cout << "three";
    else if(nr==4)
        cout << "four";
    else if(nr==5)
        cout << "five";
    else if(nr==6)
        cout << "six";
    else if(nr==7)
        cout << "seven";
    else if(nr==8)
        cout << "eight";
    else if(nr==9)
        cout << "nine";
    else 
        cout << "Greater than 9";
        
   return 0;
}
