#include<iostream>
using namespace std ;

int main(){
    int n  = 5;
    int aar[n];
    
int arr[n] {1,2,3,4,5};

    int start = 0;
    int end = n-1 ;
    while(start<end){
        int mid = (start+end)/2;

        if(arr[mid] ==4){
            cout<<"element not found "<<mid;
            return 0 ;
        }
        else if(arr[mid]<4){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
    return 0;
 
}





   // finding index with user inpout 

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 9; // You need to initialize 'n' before declaring the array
//     int arr[] = {1, 2, 3, 4, 5 , 6 , 7 , 8, 9 };
//     int a ;
//     cout << "Enter the value of 'a': ";
//     cin>>a;
    




//     int start = 0;
//     int end = n - 1; // You need to subtract 1 to get the correct index of the last element

//     while (start <= end) { // Change condition to include the case where start == end
//         int mid = (start + end) / 2;

//         if (arr[mid] == a ) {
//             cout << "Element found at index " << mid << endl;
//             return 0; // You found the element, so you can return from the program
//         } else if (arr[mid] < a ) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }



//     cout << "Element not found" << endl;
//     return 0;
// }
