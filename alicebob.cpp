//question link
//https://leetcode.com/problems/maximum-subarray

#include <bits/stdc++.h> 

using namespace std;
 bool divisorGame(int N) {
     int x = N/2;
     int temp = 0;
     if(N == 2)
        return true;
    if(N == 3)
        return false;
     while(N>2){
         while(N%x != 0){
             x--;
         }
         
        N-=x;
         temp++;

         if(temp%2 != 0)
           cout <<"alice:" <<x <<" N:"<< N<<endl;
        else
        {
      cout <<"Bob:" <<x <<" N:"<< N<<endl;
        }
        x--;
       cout << x;
    


     }
  //   cout << temp;
     if(temp%2 != 0)
        return true;
    else
    {
        return true;
    }
    
    

    return false;
        
    }
 
int main(){
    vector<int> t = {-2,1,-3,4,-1,2,1,-5,4};
    cout << divisorGame(4);
    


    return 0;
}