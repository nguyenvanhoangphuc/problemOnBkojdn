// đồ thị
#include <iostream> 
using namespace std; 

int main() {
    long long a,b,c,d,e,f; 
    long long x,y,z,t; 
    cin>>a>>b>>c>>d>>e>>f; 
    x=c-a; 
    y=d-b; 
    z=e-a; 
    t=f-b; 
    long long kt; 
    kt=x*t-y*z; 
    if (kt==0) cout<<"TOWARDS"; 
    else if (kt>0) cout<<"LEFT"; 
    else if (kt<0) cout<<"RIGHT";
    return 0; 
}