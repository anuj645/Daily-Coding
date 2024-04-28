#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<" Enter the size of array ";
    cin>>n;
    int arr[n];
    cout << "enter the value of arr"<<endl;

    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];

    }

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<",";
    }
    return 0 ;
// int arr[5] {1,2,3,4,5};
// for(int i = 0 ; i <5 ; i++ ){
//     cout<<arr[i]<<" ";

// };
//   return 0 ;

}