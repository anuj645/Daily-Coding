         // patern triangle 

// #include <iostream>
// using namespace std;

// int main(){
//     int height;

//     cout<<"enter the height of the triangle : ";
//     cin>> height;

//     for(int i = 1; i <= height;i++){
//         for(int j = 1 ; j<=i ; j++){```````  
//             cout<<"1"<<"2";
//         }
//         cout<<endl;

//     }
//     return 0 ;
// }

           // inpout output statement 

// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout << "Enter a number : ";
//     cin>>a;
//     cout <<"\nYour number is "<<a<<".";

//     return 0 ;

// }

           // Even ODD

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     if(n%2==0){
//         cout<<"A "<<n<<" is even number .\n";
//     }
//     else{
//         cout<<"A "<<n<<" is odd number .";

//     }
//     return 0;

//     }

        //fibonacci series

// #include <iostream>
// using namespace std;

// void fibonacci(int n) {
//     int first = 0, second = 1, next;

//     cout << "Fibonacci Series up to " << n << " terms: ";
    
//     for (int i = 0; i < n; ++i) {
//         if (i <= 1)
//             next = i;
//         else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         cout << next << " ";
//     }
// }

// int main() {
//     int terms;

//     cout << "Enter the number of terms for Fibonacci series: ";
//     cin >> terms;

//     fibonacci(terms);

//     return 0 ;

// }

       // Arthimatic operators

// #include <iostream>
// using namespace std;

// int main(){
    
//     int a, b;
//     cout<<"Enter first number"<<endl;
//     cin>>a;

//     cout<<"Enter second number"<<endl;
//     cin>>b;

//     cout<<"sum is "<<a + b<<endl;
//     cout<<"subtraction is "<<a - b<<endl;
//     cout<<"multiplaction is "<<a * b<<endl;
//     cout<<"Division  is "<<(float) a / b<<endl;
//     return 0;

// }

      // factorial

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



  // addition of first 10 no. 

//   #include <iostream>
//   using namespace std;

//   int main(){
//      // Loop from 1 to 10
//     int sum = 0;
//     for (int i = 1; i <= 10; ++i) {
//         sum +=i;
//     }
//     cout <<sum;

//     return 0;
// }

     // size 

// #include <iostream>
// using namespace std;

// int main(){
//     cout<< "The size of float: "<<sizeof(float);
//     cout<< "\nThe size of int: "<<sizeof(int);
//     cout<< "\nThe size of double: "<<sizeof(double);
//     cout<< "\nThe size of char: "<<sizeof(char);
//     cout<< "\nThe size of long: "<<sizeof(long);

//     return 0 ;


// }

       // vovel 

// #include <iostream>
// using namespace std;

// int main(){
//     char ch; 
//     cout << "Enter a character : ";
//     cin >> ch;
    
    
//     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//         cout << "Character is a vowel.\n"; 
//     }
//     else{
//         cout << "Character is not a vowel.";
//     }
//     return 0 ;

// }



    // Leap year

// #include <iostream>
// using namespace std;

// int main(){
    
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }

    // Palindrome#include <iostream>

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool isPalindrome(string str) {
//     string original = str;
//     reverse(str.begin(), str.end());
//     return original == str;
// }

// int main() {
//     string input;
//     cout << "Enter a word or number: ";
//     cin >> input;

//     if (isPalindrome(input)) {
//         cout << input << " is a palindrome./n" ;
//     } else {
//         cout << input << " is not a palindrome.";
//     }

//     return 0;
// }



//  create a class to get&print

// #include <iostream>
// #include <string>
// using namespace std;

// class InputPrinter {
// private:
//     string input;

// public:
//     void getInput() {
//        cout << "Enter some text: ";
//         getline(cin, input);
//     }

//     void printInput() {
//         cout << "You entered: " << input << std::endl;
//     }
// };

// int main() {
//     InputPrinter printer;
//     printer.getInput();
//     printer.printInput();
//     return 0;
// }

//               //  print reg. no. name and address 
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string regNo, name, address;

  
//     cout << "Enter registration number: ";
//     getline(cin, regNo);

  
//     cout << "Enter name: ";
//     getline(cin, name);

//     cout << "Enter address: ";
//     getline(cin, address);

    
//     cout << "\nRegistration Number: " << regNo << endl;
//     cout << "Name: " << name << endl;
//     cout << "Address: " << address << endl;

//     return 0;
// }



        // class to to print 5 reg no. in c++
// #include <iostream>
// #include <string>

// using namespace std;

// class Registration {
// private:
//     string regNumbers[5];

// public:
//     void setRegNumber(int index, const string& regNo) {
//         if (index >= 0 && index < 5) {
//             regNumbers[index] = regNo;
//         } else {
//             cout << "Index out of range" << endl;
//         }
//     }

//     void printRegNumbers() {
//         cout << "Registration Numbers:" << endl;
//         for (int i = 0; i < 5; ++i) {
//             cout << "Reg No. " << (i + 1) << ": " << regNumbers[i] << endl;
//         }
//     }
// };

// int main() {
//     Registration regObj;

//     regObj.setRegNumber(0, "ABC123");
//     regObj.setRegNumber(1, "XYZ456");
//     regObj.setRegNumber(2, "DEF789");
//     regObj.setRegNumber(3, "GHI321");
//     regObj.setRegNumber(4, "JKL654");

    
//     regObj.printRegNumbers();

//     return 0;
// }


        //class using pointer  in c++
// #include <iostream>
// #include <string>

// using namespace std;

// class Registration {
// private:
//     string* regNumbers; 
//     int size; 

// public:
//     // Constructor
//     Registration(int s) : size(s) {
//         regNumbers = new string[size]; 
//     }

//     // Destructor
//     ~Registration() {
//         delete[] regNumbers; 
//     }

//     void setRegNumber(int index, const string& regNo) {
//         if (index >= 0 && index < size) {
//             regNumbers[index] = regNo;
//         } else {
//             cout << "Index out of range" << endl;
//         }
//     }

//     void printRegNumbers() {
//         cout << "Registration Numbers:" << endl;
//         for (int i = 0; i < size; ++i) {
//             cout << "Reg No. " << (i + 1) << ": " << regNumbers[i] << endl;
//         }
//     }
// };

// int main() {
//     Registration regObj(5);

//     regObj.setRegNumber(0, "ABC123");
//     regObj.setRegNumber(1, "XYZ456");
//     regObj.setRegNumber(2, "DEF789");
//     regObj.setRegNumber(3, "GHI321");
//     regObj.setRegNumber(4, "JKL654");

//     regObj.printRegNumbers();

//     return 0;
// }

     //class to read and write 10 names 

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// class NameManager {
// private:
//     string names[10]; 

// public:

//     void readNames(const string& filename) {
//         ifstream inFile(filename); 
//         if (inFile.is_open()) {
//             for (int i = 0; i < 10; ++i) {
//                 getline(inFile, names[i]); 
//             }
//             inFile.close(); 
//             cout << "Names read successfully." << endl;
//         } else {
//             cout << "Unable to open file." << endl;
//         }
//     }

//     void writeNames(const string& filename) {
//         ofstream outFile(filename); 
//         if (outFile.is_open()) {
//             for (int i = 0; i < 10; ++i) {
//                 outFile << names[i] << endl; 
//             }
//             outFile.close();
//             cout << "Names written successfully." << endl;
//         } else {
//             cout << "Unable to open file." << endl;
//         }
//     }
// };

// int main() {
//     NameManager manager;

//     manager.readNames("names.txt");

//     manager.writeNames("output_names.txt");

//     return 0;
// }

    //using constructor and destractor

// #include <iostream>
// #include <string>

// using namespace std;

// class Example {
// private:
//     string message;

// public:
//     // Constructor
//     Example(const string& msg) : message(msg) {
//         cout << "Constructor called. Message: " << message << endl;
//     }

//     // Destructor
//     ~Example() {
//         cout << "Destructor called. Message: " << message << endl;
//     }
// };

// int main() {
//     // Creating an object of Example class
//     Example obj("Hello, World!");

//     // Do something with the object...

//     return 0;
// }

       // nesting of class 

// #include <iostream>
// #include <string>

// using namespace std;

// class Outer {
// private:
//     int outerData;

// public:
//     Outer(int data) : outerData(data) {}

//     class Inner {
//     private:
//         int innerData;

//     public:
//         Inner(int data) : innerData(data) {}

//         void displayInner() {
//             cout << "Inner data: " << innerData << endl;
//         }
//     };

//     void displayOuter() {
//         cout << "Outer data: " << outerData << endl;
//     }
// };

// int main() {
//     Outer outerObj(10);

//     Outer::Inner innerObj(20);

//     outerObj.displayOuter();

//     innerObj.displayInner();

//     return 0;
// }

   // implement the friend function function

// #include <iostream>
// using namespace std;

// class MyClass {
//     private:
//         int num;

//     public:
//         MyClass() : num(0) {}
//         MyClass(int n) : num(n) {}

//         friend void display(const MyClass&);

//         friend void display(const MyClass&, int);
// };

// void display(const MyClass& obj) {
//     cout << "Value: " << obj.num << endl;
// }

// void display(const MyClass& obj, int x) {
//     cout << "Value multiplied by " << x << ": " << obj.num * x << endl;
// }

// int main() {
//     MyClass obj1(5);
//     MyClass obj2(10);

//     display(obj1); 
//     display(obj2, 2);

//     return 0;
// }
           
             // implement the friend function over riding

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void display() const {
//         cout << "Base display" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() const override {
//         cout << "Derived display" << endl;
//     }

//     friend void friendDisplay(const Derived& obj);
// };

// void friendDisplay(const Derived& obj) {
//     cout << "Friend display in Derived" << endl;
// }

// int main() {
//     Derived d;
//     friendDisplay(d); 
//     d.display(); 
    
//     return 0;
// }

    // implement the friend function virtual function 


// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void display() const {
//         cout << "Base display" << endl;
//     }
// };

// class FriendAccessor {
// public:
//     static void displayFriend(const Base& obj) {
//         obj.display();
//     }
// };

// class Derived : public Base {
// public:
//     void display() const override {
//         cout << "Derived display" << endl;
//     }
// };

// int main() {
//     Derived d;
//     FriendAccessor::displayFriend(d); // Output: "Derived display"
    
//     return 0;
// }


      //program for virtual function 

// #include <iostream>
// using namespace std;

// // Base class
// class Shape {
// public:
//     // Virtual function to calculate area
//     virtual float calculateArea() const {
//         cout << "Calculating area of Shape" << endl;
//         return 0.0;
//     }
// };

// // Derived class 1
// class Rectangle : public Shape {
// private:
//     float length;
//     float width;

// public:
//     Rectangle(float l, float w) : length(l), width(w) {}

//     // Override virtual function to calculate area of rectangle
//     float calculateArea() const override {
//         cout << "Calculating area of Rectangle" << endl;
//         return length * width;
//     }
// };

// // Derived class 2
// class Circle : public Shape {
// private:
//     float radius;

// public:
//     Circle(float r) : radius(r) {}

//     // Override virtual function to calculate area of circle
//     float calculateArea() const override {
//         cout << "Calculating area of Circle" << endl;
//         return 3.14 * radius * radius;
//     }
// };

// int main() {
//     // Creating objects of derived classes
//     Rectangle rect(5, 3);
//     Circle circle(4);

//     // Calling virtual function to calculate area
//     cout << "Area of Rectangle: " << rect.calculateArea() << endl;
//     cout << "Area of Circle: " << circle.calculateArea() << endl;

//     return 0;
// }

      // program operator

// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     // Constructor
//     Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

//     // Overloading addition operator '+'
//     Complex operator+(const Complex& other) const {
//         return Complex(real + other.real, imag + other.imag);
//     }

//     // Overloading subtraction operator '-'
//     Complex operator-(const Complex& other) const {
//         return Complex(real - other.real, imag - other.imag);
//     }

//     // Overloading multiplication operator '*'
//     Complex operator*(const Complex& other) const {
//         double r = (real * other.real) - (imag * other.imag);
//         double i = (real * other.imag) + (imag * other.real);
//         return Complex(r, i);
//     }

//     // Overloading the output stream operator '<<'
//     friend ostream& operator<<(ostream& out, const Complex& num) {
//         out << num.real;
//         if (num.imag >= 0)
//             out << " + " << num.imag << "i";
//         else
//             out << " - " << -num.imag << "i";
//         return out;
//     }
// };

// int main() {
//     Complex num1(3.0, 4.0);
//     Complex num2(2.0, -1.0);

//     Complex sum = num1 + num2;
//     Complex diff = num1 - num2;
//     Complex prod = num1 * num2;

//     cout << "num1: " << num1 << endl;
//     cout << "num2: " << num2 << endl;
//     cout << "Sum: " << sum << endl;
//     cout << "Difference: " << diff << endl;
//     cout << "Product: " << prod << endl;

//     return 0;
// }










































































































































































          // OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

// #include <iostream>
// #include <string>
// using namespace std;

// class binary
// {
// private:
//     string s;
//     void chk_bin(void);

// public:
//     void read(void);
//     void ones_compliment(void);
//     void display(void);
// };

// void binary::read(void)
// {
//     cout << "Enter a binary number s : " << endl;
//     cin >> s;
// }

// void binary::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary format . " << endl;
//             exit(0);
//         }
//     }
// }

// void binary::ones_compliment(void)
// {
//     chk_bin();
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//        else
//         {
//             s.at(i) = '0';
//         }
//     }
// }

// void binary::display(void)
// {
//     cout<<"Displaying your binary number"<<endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout<<endl;
// }

// int main()
// {
//     binary b;
//     b.read();
//     // b.chk_bin();
//     b.display();
//     b.ones_compliment();
//     b.display();

//     return 0;
// }