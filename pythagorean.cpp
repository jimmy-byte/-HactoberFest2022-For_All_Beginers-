#include<bits/stdc++.h>
using namespace std;
bool chk(int x, int y, int z){
    int a= max(x,max(y,z));
    int b,c;
    if(a == x){
         b =y;
         c=z;
    }
        else if(a == y){
         b =x;
         c=z;
    }
    
        else{
         b =x;
         c=y;
    }
    if( (a*a) == (b*b) + (c*c))
     return true;
     else
     return false;
}

int32_t main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(chk(x,y,z)){
        cout<<"Paythagorean triplet\n";
    }
    else
    cout<<"Not a pythagorean triplet";
}