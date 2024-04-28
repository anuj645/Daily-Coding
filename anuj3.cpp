// #include <iostream>
// using namespace std;

// // void fun( int , string);

// void fun(int id,string name = "NA"){
//     cout<<id<<" "<< name ;
// }

// int main(){
//     fun(101);
//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// void fun(){
//     static int x = 1;
//     int y = 1;
//     x++;
//     y++;
//     cout<<x<<" "<<y<<"\n";

// }

// int main(){
//     fun();
//     fun();
//     fun();
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int find_first_digit(int n){
//     while(n>10){
//         n=n/10;
//     }
//     return n;

// }

// int main(){
//     int n ;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<< find_first_digit(n);
//     return 0 ;

// }
                           //loops 
// #include <iostream>
// using namespace std;

// int main(){
//     // int i = 0 ;
//     // while(i<5){
//     //     cout<<i<<"\n";                     // WHILE LOOP
//     //     i++;
//     // }
//     // return 0 ;


//     // for(int i = 0; i <= 10;i++){
//     //     cout<<i<<"\n";                      // FOR LOOP
//     // }
//     // return 0 ;

//     // int i = 0;
//     // do{
//     //     cout<<"anuj\n";
//     //     i++;                           // DO WHILE LOOP
//     // }while(i<4);
//     // return 0;

//     // int n ;
//     // cout<<"Enter a number : ";
//     // cin>>n;

//     // for(int x = 1 ; x <= n ; x++){
//     //     for(int i = 1 ; i <=10 ; i++){      //NESTED LOOP
//     //         cout<<(x*i)<<" ";

//     //     }
//     //     cout<<"\n";
//     // }
//     // return 0;


// }


// #include<iostream>
// using namespace std;

// void fun(int arr[]){               // arr[] is a pointer not a array
//     int n =  sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0 ; i < n; i++){
//         cout<<arr[i]<<" ";
//         cout<<"\n"<<arr;

//     }
// }

// int main(){
//     int arr[]= {10 ,20 ,30 ,40};
//     int n=   sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0 ;i < n ; i++)
//         cout<< arr[i]<<" ";
//         cout<<" \n";

//     fun(arr);
//     return 0;
// }
#include<iostream>
using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int i=0,j=nums.size()-1;
//         if(nums.size()==1){
//             if(nums[0]==val){
//                 nums.pop_back();
//                 return 0;
//             }
//         }
//         while(i<=j){
//             if(nums[i]==val){
//                 swap(nums[i],nums[j]);
//                 j--;
//                 nums.pop_back();
//             }
//             else i++;
//         }
//         return nums.size();
//     }
// };
 ListNode* dummyHead = new ListNode(0);
    ListNode* current = dummyHead;
    int carry = 0;
    
    ListNode* p = l1;
    ListNode* q = l2;
    
    while (p != nullptr || q != nullptr) {
        int x = (p != nullptr) ? p->val : 0;
        int y = (q != nullptr) ? q->val : 0;
        
        int sum = x + y + carry;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        
        if (p != nullptr) p = p->next;
        if (q != nullptr) q = q->next;
    }
    
    if (carry > 0) {
        current->next = new ListNode(carry);
    }
    
    return dummyHead->next;
}

void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

ListNode* createListFromArray(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;


