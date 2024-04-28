//                                       Break 
#include <iostream>
using namespace std;

int main(){
    for (int i = 0 ; i < 10  ;   i++  ){
    if ( i== 12){
        break;
      }
       cout<<i <<"\n";
    }
      return 0;


 }


 //                                        using break while loop

#include<iostream>
using namespace std;

int main(){
    int i = 0;
    while (i<10 ){
        cout<<i<<"\n";
        i++;
        if (i==5){
            break;
        }
    
    }
    return 0 ;
}



 //                                                      Continus
 #include <iostream>
 using namespace std;

 int main() {
    for (int i = 0; i < 10 ; i++){
        if (i == 4){
            continue;
        
        }
        
        cout<< i <<"\n";
    }
      return 0 ;

 }

//                       using while loop
#include <iostream>
using namespace std;

                                                             
int main(){
   int i = 1;
   int t ;
   cout<<" Write a number which you naad a table ";
   cin>>t;
    while ( i < 11){
        cout<<i*t <<"\n";
        i++;
    }
      return 0;

}

  // Using Do While  loop
#include <iostream>
using namespace std;

                                                             
int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 5);
  return 0;

}
 //                                Using for loop
 #include <iostream>
using namespace std;

int main() {
  int a;
  cout << " enterna umber ";
  cin>>a;
  for (int i = 1; i <= 10; i++) {
    cout << i*a << "\n";
    if (i==10){
    break;
      }
      
  }
   
  return 0;
  
// }
                                                               