// Donation Ease Project by Faisal Khan and Mian Sohaib
//
//
//
//
//
//
//
//

#include "User.h"
#include "DonationBox.h"

using namespace std;

void menu();

int main() {
    DonationBox app;
    User user;
    int option;
    
    user.roughData();


    do {
        
        menu();
        cout<<" enter choice "<< endl;
        cin>>option;
        switch (option) {
            case 1:
                try {
                    
//                    string u,p;
//                    cout<<"enter username"<< endl;
//                    cin>>u;
//                    cout<<"enter password"<< endl;
//                    cin>>p;
                    user.login("devfaisal", "faisal");
//                    user.login(u, p);

                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 2:
                user.registerUser();
            break;
                
            case 3:
                try {
                    user.userProfile();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 4:
                try {
                    user.update();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 5:
                try {
                    user.forgotPassword();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
         
            case 6:

                try {
                    app.create(6, "Peshawar University");
                    app.create(7, "City university");
                    app.create(8, "Islamia college");
                    app.create(9, "Spin Jomat");
                    app.create(10, "Gulbhar NO 3, Star Bakery");
                    app.create(11, "Dalazak, Salman bakkery");
                    app.create(1, "Nishtarbad, girls high school");
                    app.create(2, "Gulbhar NO 1, near shell pump");
                    app.create(3, "Hashtnagri Gate");
                    app.create(4, "Sikandar pura");
                    app.create(5, "Sadar");
            
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 7:
                try {
                    app.showAllBoxes();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 8:
                try {
                    int x;
                    cout<<" all boxes... "<< endl;
                    app.showAllBoxes();
                    cout<<" enter id of the box you want to delete"<< endl;
                    cin>>x;
                    app.dlt(x);

                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 9:
                try {
                    cout<<" all boxes... "<< endl;
                    app.showAllBoxes();
                    app.search();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
           
            case 10:
                try {
                    app.sort();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
    
        }
       
    } while(option != 0);
    
    return 0;
}

void menu() {
    cout<<"---------------------------"<< endl;
    cout<<"| 1.  Login                |"<< endl;
    cout<<"| 2.  Register             |"<< endl;
    cout<<"| 3.  User Profile         |"<< endl;
    cout<<"| 4.  Update User          |"<< endl;
    cout<<"| 5.  Forgot Password      |"<< endl;
    cout<<"| 6.  Create Box           |"<< endl;
    cout<<"| 7.  Show Boxes           |"<< endl;
    cout<<"| 8.  Delete Box           |"<< endl;
    cout<<"| 9.  Search Box           |"<< endl;
    cout<<"| 10. Sort Box             |"<< endl;
    cout<<"---------------------------"<< endl;
}
