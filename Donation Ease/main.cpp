// Donation Ease Project by Faisal Khan (12598 ) and Mian Sohaib ()
//


#include "User.h"
#include "DonationBox.h"

using namespace std;

void menu();

int main() {
    DonationBox app;
    User user;
    int option;
    
    do {
        
        menu();
        cout<<" enter choice "<< endl;
        cin>>option;
        switch (option) {
            case 1:
                system("cls");
                try {
                    string u,p;
                    cout<<"enter username"<< endl;
                    cin>>u;
                    cout<<"enter password"<< endl;
                    cin>>p;
                    user.login(u, p);

                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 2:
                system("cls");
                user.registerUser();
            break;
                
            case 3:
                system("cls");
                try {
                    user.userProfile();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 4:
                system("cls");
                try {
                    user.update();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 5:
                system("cls");
                try {
                    user.forgotPassword();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
         
            case 6:
                system("cls");
                try {
                    int id, i;
                    string ad;
                    cout<<"enter 0 to to stop creating box, otherwise enter any other number";
                    cin>>i;
                    while (i != 0) {
                        cin.ignore();
                        cout<<" enter address of box "<< endl;
                        getline(cin, ad);
                        cout<<"enter id of the box"<< endl;
                        cin>> id;
                        
                        app.create(id, ad);
                        
                        cout<<"enter 0 to quit";
                        cin>>i;
                    }
                    
                    // this is sample data
                    char o;
                    cout<<" do you ant to create sample data "<< endl;
                    cout<<" enter y for yes "<< endl;
                    cin>>o;
                    if(o == 'y') {
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
                    }
            
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 7:
                system("cls");
                try {
                    app.showAllBoxes();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
                
            case 8:
                system("cls");
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
                system("cls");
                try {
                    cout<<" all boxes... "<< endl;
                    app.showAllBoxes();
                    app.search();
                } catch (const char *e) {
                    cout<< e<< endl;
                }
            break;
           
            case 10:
                system("cls");
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
