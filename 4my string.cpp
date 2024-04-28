// #include<iostream>
//  using namespace std;

// int main(){
//     string firstname = "Anuj";
//     string lastname = " Raghuwanshi";
//     // string Fullname = firstname.append(lastname);
//     string fullname = firstname.append(lastname);         // add the name instring 
//     cout<<fullname<<"\n";

//     // Addition of numbar
//     int a = 45;
//     int b = 69;
//     int x = a + b ;
//     int y = -a-b;
//     int z = a*b/a;
//     cout<<x<<"\n"<<y <<"\n"<<z;


// // length of string


//     cout<<"\n"<<fullname.size();

// //prints the first character in myString:
//     cout<<"\n"<<fullname[0];

// // in string we havr to show some in "" quote

//   string txt = "We have so-called \"University\" from the Sorth.";
  
//   cout <<"\n" <<txt;


//   //The max(x,y) and min(x,y) function can be used to find the highest value and lowest value of x and y:]

//    cout<<"\n maxmum value from "<<max(5,10)<<"\n minimum value of "<< min(15,45);
   


// int e = 9;
//    int f = 10;
//    cout<< ( e < f);

// int e = 10;
//   int f = 9;
//   cout<<"\n"<<(e>f);

   

    
//     return 0;

// }
//}


#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}