//given a 4 digit number, guess a number that can be added
// either to the left of right of the number to make the number a pallendrome
#include<iostream>
#include<math.h>
using namespace std;

int pall(int n){
    int n1 = n,sum = 0,rem;
    while(n != 0){
        rem = n%10;
        sum = sum*10 + rem;
        n/=10;
    }
    if(sum == n1)
        return 1;
    else
    {
            return 0;
    }
    return 0;
    
}

int main(){
    int n,temp,i = 0;
    cin >>n;
    temp = n/10;
    if(pall(temp)){
        cout <<n%10;
        return 0;
    }

    temp = n%1000;
    cout << endl <<temp <<endl;
    if(pall(temp)){
        cout << n/1000;
        return 0;
    }

    return 0;

    /*LOGIC 2
      int n,temp,temp2;
    scanf("%d",&n);
    temp = n/10;
    temp2 = n%1000;
    if(temp%10 == temp/100){
        printf("%d",n%10);
        return 0;
    }
     if(temp2%10 == temp2/100){
        printf("%d",n/1000);
        return 0;
    } */

   


}