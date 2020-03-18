//
//  SimpleQueue.hpp
//  Implementaion of SimpleQueue Data Structure
//
//  Created by Nair Saarika Bhasi on 11/21/19.
//  Copyright © 2019 Nair Saarika Bhasi. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include<iostream>
using namespace std;
#endif /* Queue_hpp */
int queueImplementation();
#define SIZE 10
class QArraySimple{
private:
    int Q[SIZE];
    int rear;
    int front;
    int capacity;

    int isQArrayEmpty(){
        if (front > rear){return 1;}
        else return 0;
            
    }
    
    int isQArrayFull(){
        if(rear == capacity){return 1;}
        else return 0;
    }
    
    void enQArray(int val){
        if(isQArrayFull()){throw "Queue FULL : Can not insert element ";}
        else
        {
          //  if(isQArrayEmpty()){
                rear ++;
                Q[rear] = val;
                }
           /* else {rear ++;
                Q[rear] = val;    
            }*/
        
    }
    
    int deQArray(){
        if(isQArrayEmpty()){throw "Queue Empty : Can not remove element ";}
        else {
            int val = Q[front];
            front++;
            return val;
        }
    }
    
    void printQArray(){
        for(int i =rear; i>=front ;i--){
            cout<<Q[i]<<"--->";
            
        }
        cout<<"NULL"<<endl;
    }
    void peek(){
        if(isQArrayEmpty()){throw "Queue Empty";}
    }
public:
QArraySimple (){
    front = 0;
    rear = -1;
    capacity = SIZE -1;
    }
    void displayMenu(){
            int myChoice = 1;
            int val;
            
            cout<<"WELCOME TO MY FIRST QUEUE ARRAY "<<endl<<"Here are the list of operations that can be performed on my array: "<<endl;
            while(myChoice!=4)
            {
            cout<<"1. INSERT "<<'\n'<<"2. Delete"<<'\n'<<"3. PEEK"<<endl<<"4. Exit"<<endl<<"please enter your choice: ";
            cin >> myChoice;
            switch(myChoice){
                case 1:
                    try{
                    cout<<"Enter value to be inserted to the array ";
                    cin>>val;
                    enQArray(val);
                    printQArray();
                    }catch(const char *msg){cerr<<msg<<endl;}
                    break;
                case 2:
                    try{
                    val = deQArray();
                    cout<<"Removed "<<val<<" from array"<<endl;
                    printQArray();
                    }catch(const char* msg){cerr<<msg<<endl;}
                    break;
            
                case 3:
                    try{
                    peek();
                    cout<<"FRONT ELEMENT Index is "<<front<< "value is "<<Q[front] <<endl<<"REAR ELEMENT Index is" << rear<<" value is "<<Q[rear]<<endl;
                   // printStackArray();
                    }catch(const char* msg){cerr<<msg<<endl;}
                    break;
        
                default:
                    cout<<"NO MATCHING CHOICE FOUND PROGRAM "<<endl;
                    break;
            }
        
        }
    }
    
};




