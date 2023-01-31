#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,e,count=0;
    cout<<"enter the sie of array ";
    cin>>s;
    int arr[s];
    //to store the array
    cout<<"enter the element"<<endl;
    for(int i = 0 ; i<s ; i++){
        cin>>arr[i];

    }
   //to count the number of element in array
    cout<<"enter the element you wana search"<<endl;
    cin>>e;
    for(int i = 0 ; i<s ; i++){
        if(arr[i]==e){
            count++;
        }
    }
    cout<<"the frequency of "<<e <<" is "<<count;
    return 0;
}