//
//  DonationBox.h
//  Donation Ease
//
//  Created by Faisal Khan on 21/11/2022.
//


#ifndef DonationBox_h
#define DonationBox_h

#include <iostream>
#include "User.h"

using  namespace std;

struct Box {
    int id;
    string location, installedDate;
    Box *next;
    Box *prev;
};


class DonationBox {
private:
    Box *head, *tail, *temp;
public:
    DonationBox() {
        head = NULL;
        tail = NULL;
    }
  
    void create(int x, string location) {
        if(!isUserLoggedIn)
            throw "EXCEPTION: you must login first";
        
        temp = new Box();
        temp->id = x;
        temp->location = location;
        temp->next = NULL;
        temp->prev = NULL;
        if(!head) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    void showAllBoxes() {
        if(!isUserLoggedIn)
            throw "EXCEPTION: you must login first";

        if(!head)
            throw "EXCEPTION: No Donation Box available";
        
        Box *c = head;
        while(c) {
            cout<<"----------------------------------------------------"<< endl;
            cout<<"|                                                   |"<< endl;
            cout<<"|     id: "<<c->id <<"                               "<< endl;
            cout<<"|     location: "<<c->location <<"             "<< endl;
            cout<<"|                                                   |"<< endl;
            cout<<"----------------------------------------------------"<< endl;

            c = c->next;
        }
    }
    
     void search() {
         if(!isUserLoggedIn)
             throw "EXCEPTION: you must login first";

         if(!head)
             throw "EXCEPTION: No Donation Box available";
        
         int x;
         cout<<" Enter id of the Donation Box you want to search"<< endl;
         cin>>x;
        Box *t = head;
        while (t) {
            if(x == t->id) {
                cout<<"----------------------------------------------------"<< endl;
                cout<<"|                                                   |"<< endl;
                cout<<"|     id: "<<t->id <<"                               "<< endl;
                cout<<"|     location: "<<t->location <<"             "<< endl;
                cout<<"|                                                   |"<< endl;
                cout<<"----------------------------------------------------"<< endl;
                return;
            } else {
                if(!t->next) {
                    throw "EXCEPTION: Donation Box not found";
                }
            }
                
            t = t->next;
        }
     }
    
    void dlt(int x) {
        if(!isUserLoggedIn)
            throw "you must login first";

        if(!head)
            throw "EXCEPTION: No Donation Box available";
        
        Box *t = head;
        Box *TBD = NULL;
        while(t) {
            if(x == head->id) {
                TBD = t;
                t = t->next;
                t->prev = NULL;
                head = t;
                
                delete TBD;
                return;
            } else if (x == tail->id) {
                while (t->next->next != NULL) {
                    t = t->next;
                }
                TBD = t->next;
                t->next = NULL;
                tail = t->next;
                
                delete  TBD;
                return;
            } else if(x == t->id) {
                t->prev->next = t->prev->next->next;
                t->next->prev = t->next->prev->prev;
                delete t;
                return;
            } else {
                if(!t->next) {
                    throw "EXCEPTION: Donation Box not found";
                }
            }
            t = t->next;
        }
    }
};
#endif /* DonationBox_h */
