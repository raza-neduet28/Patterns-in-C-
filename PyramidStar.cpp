#include<iostream>
using namespace std;
int main(){

int size;
cout<<"Enter the size of Triangle :";
cin>>size;
for(int i=0 ;i<size ;i++){

    for(int j=0 ;j<size-i;j++){
        cout<<" ";
    }
 for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
cout<<endl;
}
}
