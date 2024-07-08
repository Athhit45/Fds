#include <iostream>
using namespace std;

void greatest(int a,int b,int c){
    if ((c > a) && (c >b)){
        cout<<"The Greatest number is "<<c<<endl;
    }
    else if((b> a)){
        cout<<"The Greatest is "<<b<<endl;
    }
    else{
        cout<<"The greatest number is "<<a<<endl;
    }
}

int main(){
    int a ,b,c;
    cout<<"enter the value of a b and c"<<endl;
    cin>> a>>b>>c;
    greatest(a,b,c);
    return 0;
}
