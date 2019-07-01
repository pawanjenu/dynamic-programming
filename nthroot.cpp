//program to find nearest nth root
//for exact root, just remove ceil() and store the value in ans integer
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number,nth,root;
    cin >> number>> nth;
    root = ceil(exp(log(number)/nth));
    cout << root;


}