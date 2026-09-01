 
#include<iostream>
#include<string>
using namespace std;

         class student 
{
         public;
         int roll_no;
         'sting' name;  

void Accept() 
  {

         cout <<"Enter Roll number :";
          cin >> roll_no;

           cout << "Enter marks :";
           cin >> marks;

           }

          void Result() {

          if( marks>= 40) {
              cout<< " Result : pass" << endl;
 }      else {
              cout << " Result : Fail" << endl;

        }

         void display() {
          cout << ".....DISPLAY RESULT....." << endl;
          cout << "Roll number : " << roll_no << endl;
          cout << "Name :" <<name << endl;
          cout << "Mark :" << marks  << endl;
          resul();
   } 
 
int main(){
       Student s;
       s.Accept();
       s.Display();
     
        return 0;
   }
