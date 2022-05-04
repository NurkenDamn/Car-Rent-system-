#include <iostream>
#include <string>
#include <time.h>
#include <fstream>

using namespace std;
// Car-rent system with admin|user account log. 
/*
 Class: CarInfo, tenant, lordless
 Functions: Menu, Login, Register,
*/

class lordless{
private:
   string mobilenumber; // mobile number
   string worknumber; // work number
   string email; // email
   int zipcode; // zip code
public:
   // constructors
   lordless():mobilenumber(),worknumber(),email(),zipcode() {}
   lordless(string MobileP, string WorkP, string Email, int PostalI) { setMobNum(mobilenumber); setWorkNum(worknumber); setEmail(Email);setZCode(zipcode);}
   // getters
   string getMobNum() { return mobilenumber; }
   string getWorkNum() { return worknumber; }
   string getEmail() { return email; }
   int getZCode() { return zipcode; }
   // setters
   void setMobNum(string val) { mobilenumber = val; }
   void setWorkNum(string val) { worknumber = val; }
   void setEmail(string val) { email = val; }
   void setZCode(int val) { zipcode = val; }
   // public metods
   void Input(){
       string temp;
       cout << "Enter mobile number: "; getline(cin,temp);
       cout << "Enter work number: "; getline(cin, temp);
       cout << "Enter email: "; getline(cin,temp);
       int tmp; 
       cout << "Enter zip code: "; (cin >> tmp).ignore();
   }
   void Show(){
       cout << "Mobile number: " << getMobNum() << endl;
       cout << "Work number: " << getWorkNum() << endl;
       cout << "Email: " << getEmail() << endl;
       cout << "Zip code: " << getZCode() << endl;
   }
};

class CarInfo{
private:
  string brand;
  string model;
  lordless lessor;
  string SRPlate;
  int price;
public:
  
};

int main(){
    
}