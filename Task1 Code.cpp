#include <iostream>
using namespace std;

int main() {
    int Array_v[]={19,20,54,2,4,5,7};
    int A_size = sizeof(Array_v)/sizeof(Array_v[0]);
    if(A_size<2){
                cout<<"The Array Length should be more than 2";
                return 0;
                }
    else if(A_size>104){
                cout<<"The Array Length should not be more than 104";
                return 0;
                }
    int target;
    cout<<"Input target value:";
    cin>>target;
    if(target<-109 || target>109){
        cout<<"Input target value between -109 and 109:";
    return 0;
    }
    for(int w=0;w<A_size;w++){
                if(Array_v[w]<-109 || Array_v[w]>109){
                cout<<"The array numbers are invalid";
    return 0;
    }
    }
    for(int a=0;a<A_size;a++)
    {
        for(int b = a+1; b<A_size;b++)
        {
            if(Array_v[a]+Array_v[b]==target)
            {
                cout<<"Output:";
                cout<<"["<<a<<","<<b<<"]"<<endl;
                
            }
        }
    }
    cout<<"The input numbers were:";
    for(int v=0;v<A_size;v++) {
        cout<<"["<<Array_v[v]<<"]"<<",";
    }
    
    return 0;
}