#include<iostream>

using namespace std;


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
int adiff(int A,int B)
{
    int C=abs(A-B);
    while (C>180){
        C=abs(C-360);
    }
    
    return C;
}
