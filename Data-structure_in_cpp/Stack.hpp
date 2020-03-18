//
//  Stack.hpp
// Implementation of Stack Data Structure
//
//  Created by Nair Saarika Bhasi on 11/21/19.
//  Copyright © 2019 Nair Saarika Bhasi. All rights reserved.
//test 
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include<iostream>
using namespace std;
#endif /* Stack_hpp */
int stackImplemention();

#define SIZE 10
class stArray{
    
private:
    int stack[SIZE];
    int top;
    int capacity;

    int ifStackArrayIsEmpty(){
        if(top == -1)
            return 1;
        return 0;
      
    }
    int isStackArrayIsFull(){
        if(top == capacity)
            return 1;
        return 0;
    }
    
    void pushOpStArray(int val){
        if(isStackArrayIsFull()){throw "STACK IS FULL: Cannot insert element";}
        else {
            top++;
            stack[top] = val;
        }
        
    }
    
    int popOpStArray(){
        if(ifStackArrayIsEmpty()){throw "STACK IS EMPTY: Cannot remove element";}
        else{
            //top --;
            int val = stack[top--];
            return val;
        }
    }
    int peek(){
            if(ifStackArrayIsEmpty()){throw "STACK IS EMPTY";}
            else {
                return stack[top];
                
            }
        }
    void printStackArray(){
        for(int i =top; i>=0 ;i--){
            cout<<stack[i]<<"--->";
        }
        cout<<"NULL"<<endl;
    }

public:
    stArray(){
        top = -1;
        capacity = SIZE -1;
    }
    void displayMenu(){
        int myChoice = 1;
        int val;
        
        cout<<"WELCOME TO MY FIRST STACK ARRAY "<<endl<<"Here are the list of operations that can be performed on my array: "<<endl;
        while(myChoice!=4)
        {
        cout<<"1. INSERT "<<'\n'<<"2. Delete"<<'\n'<<"3. PEEK"<<endl<<"4. Exit"<<endl<<"please enter your choice: ";
        cin >> myChoice;
        switch(myChoice){
            case 1:
                try{
                cout<<"Enter value to be inserted to the array ";
                cin>>val;
                pushOpStArray(val);
                printStackArray();
                }catch(const char *msg){cerr<<msg<<endl;}
                break;
            case 2:
                try{
                val = popOpStArray();
                cout<<"Removed "<<val<<" from array"<<endl;
                printStackArray();
                }catch(const char* msg){cerr<<msg<<endl;}
                break;
        
            case 3:
                try{
                val = peek();
                cout<<"Top most element "<< val<<endl;
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
