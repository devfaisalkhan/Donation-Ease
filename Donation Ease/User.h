//
//  User.h
//  Donation Ease
//
//  Created by Faisal Khan on 21/11/2022.
//

#ifndef User_h
#define User_h

#include <iostream>
#include<fstream>

using namespace std;

struct Student {
    string name, username, password;
    int id;
    
} st;

bool isUserLoggedIn = false;
class User {
private:
    fstream stream;
    public:
        void roughData() {
            st.name = "faisal";
            st.username = "devfaisal";
            st.password = "faisal";
        }
    
        void update() {
            if(!isUserLoggedIn)
                throw "EXCEPTION: you must login first";
            
            cin.ignore();
            cout<<"name"<< endl;
            getline(cin, st.name);
            
            cout<<"username"<< endl;
            getline(cin, st.username);
            
            cout<<"password"<< endl;
            getline(cin, st.password);
              
        }
    
        void forgotPassword() {
            if(!isUserLoggedIn)
                throw "EXCEPTION: you must login first";
            
            cout<<" your password is : "<<st.password<< endl;
        }
        
        void userProfile() {
            if(!isUserLoggedIn) {
                throw "EXCEPTION: you must login first";
            }

            
            cout<<"*****--USER PROFILE--******"<<    endl;
            
            cout<<"-------------------------------------------"<< endl;
            cout<<" Name : "<<st.name<< endl;
            cout<<" Username : "<<st.username<< endl;
            
            cout<<"-------------------------------------------"<< endl;
            
        }
    
        void registerUser() {
            cin.ignore();
            
            cout<<" Name "<< endl;
            getline(cin, st.name);
          
            cout<<" Username, Email or Number "<< endl;
            getline(cin, st.username);
            
            cout<<" Password "<< endl;
            getline(cin, st.password);
          

            stream.open("name.txt", ios::out);
            stream<<st.name;
            stream.close();

            stream.open("username.txt", ios::out);
            stream<<st.username;
            stream.close();

            stream.open("password.txt", ios::out);
            stream<<st.password;
            stream.close();
    
            cout<<" ******-- Succesfully Registered --****** "<< endl;
        }
    
        void login(string username, string password) {
            if(username != st.username && password != st.password )
                throw "EXCEPTION: invalid user access";
            
            cout<<" ******-- Authenticated --****** "<< endl;
            isUserLoggedIn = true;
        }
    
};


#endif /* User_h */
