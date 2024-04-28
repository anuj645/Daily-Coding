// #include <iostream>
// using namespace std;

// int main() {
//    int height;

//    cout << "Enter the height of the triangle: ";
//    cin >> height;

//    for(int i = 1; i <= height; i++) {
//     for(int j = 1; j<=i; j++){
//          cout<<"* ";
      
//     }
//       cout << endl;
//    } 

//    return 0;
// }



//                                              Rectangle 
// #include <iostream>
// using namespace std;

// int main() {
//     int width, height;
//     cout << "Enter width and height of rectangle: ";
//     cin >> width >> height;

//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             if (i == 0 || i == height-1 || j == 0 || j == width-1) {
//                 cout << "* ";
//             } else {
//                 cout << "# ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
//  }





//                                        // circle
//  #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int radius;  // set radius of circle
//     cout<<" Enter the radius of circle ";
//     cin>>radius;
//     int x, y;         // initialize x and y coordinates

//     for (y = -radius; y <= radius; y++) {
//         for (x = -radius; x <= radius; x++) {
//             if (sqrt(pow(x, 2) + pow(y, 2)) <= radius) {
//                 cout << "* ";  // print the structure character
//             } else {
//                 cout << "  ";  // print a space character
//             }                    // break 44 
//         }
//         cout << endl;
//     }

//     return 0;

// }



//                                                          //  factors
// #include <iostream>
// using namespace std;


// int main() {
//     int n; //taking a  variable 
//     int i;
//     cout<< " Enter a number: ";                         
//     cin>>n;  // taking input from user

//     cout <<" Factor of "<<n<<" is " ;           
//     for ( i = 1; i<=n ; i++)   // using for loop ( i=1 because quesrion cannot be zero and { (i++) i is going to next number } )
//     {
//         if(n%i==0)            // "n" is divided by "i" we get 0  # finding reminder zero 
//         cout<<i<<" ";         // outpot of code 
//     }

//     return 0;
// }


//                                              //Exponent number 


// #include <iostream>

// using namespace std;

// int power(int base, int exponent) {
//     int result = 1;
//     for (int i = 0; i < exponent; i++) {
//         result *= base;
//     }
//     return result;
// }

// int main() {
//     int base, exponent;
//     cout << "Enter the base: ";
//     cin >> base;
//     cout << "Enter the exponent: ";
//     cin >> exponent;
//     int result = 1;
//     for (int i = 0; i < exponent; i++) {
//         result *= base;
//     }
//     cout << base << "^" << exponent << " = " << result << endl;
//     return 0;
// }


//                                                   // Prime Number 
// #include <iostream>
// using namespace std;

// bool isPrime(int num) {
//   if (num <= 1) {
//     return false;
//   }
//   for (int i = 2; i <= num / 2 ; i++) {            // finding the number to be prime
//     if (num % i == 0) {
//       return false;
//     }
//   }
//   return true;
// }

// int main() {
//   int count = 0;             
//   int num = 2;
//   int n;                                       // enter the number 
//   cout<<" Enter Nth number to find prime ";
//   cin>>n;

//   while (count < n) {                               
//     if (isPrime(num)) {                      
//       count++;
//     }
//     if (num==100){       // break because this program gives only prime number under 100
//         break;
//     }
//     if (count == n) {
//       cout << "The " <<n<<" prime number is: " << num << endl;
//     }
//     num++;
//   }

//   return 0;
  
// }





// #include <iostream>
// using namespace std;

// bool isPrime(int num) {
//   if (num <= 1) {
//     return false;
//   }
//   for (int i = 2; i <= num / 2 ; i++) {                   // finding the number to be prime
//     if (num % i == 0) {
//       return false;
//     }
//   }
//   return true;
// }

// int main() {
//   int num1, num2 , add, sub, multi, div, square;
  
//   cout<<"enter a first number: ";
//   cin >> num1;

//   cout<<"\n entet a second number: ";
//   cin >>num2;

//    add = num1+num2;
//    sub = num1-num2;
//    multi = num1 * num2;
//    div = num1 / num2;

// //    square = num1;
// //    cout<<square;
//   cout<<"\n addition of "<<num1<<" and "<<num2 <<" = "<<add<<"\n subtraction of number "<<num1<<" and "<<num2<<" = "<<sub<<"\n multiplaction of number "<<num1<<" and "<<num2<<" = "<<multi<<"\n division of number "<<num1<<" and "<<num2<<" = "<<div;


//                                // factor of number


//     int n;
//     int i;
//     cout<< "\n Enter a number to Factorise ";
//     cin>>n;
//     cout<<" Factor of  "<<n<< " is ";
//     for( i= 1 ; i<=n; i++){
//       if(n%i==0)
//       cout<<i<<" ";
//                        //  primr number
//     int count = 0;             
//      int num = 2;
//     int a;    // enter the number 
//     cout<<"\n Enter Nth number to find prime ";
//     cin>>a;

//      while (count < a) {                               
//        if (isPrime(num)) {                      
//       count++;
//     }
//     if (num==100){     // break because this program gives only prime number under 100
//         break;
//     }
//     if (count == a) {
//       cout << "The " <<a<<" prime number is: " << num << endl;
//     }
//     num++;
//   }

    
//  return 0;

// }


                                   
 