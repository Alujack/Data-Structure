/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on November 22, 2016, 4:01 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
class Link{
public:
    int IntData;
    Link* NextLink;
    Link(){
        IntData = -99;
        NextLink = NULL;
    };
    Link(int Data){
        IntData = Data;
        NextLink = NULL;
    }
};
//===============================================
class LinkedList{
    public:
    Link *pFirst;
    
    int Counter;

    LinkedList(){
        pFirst = NULL;
        Counter = 0;
    };
    void AddToFirst(Link *NewLink);
    void AddToFirstWithValue(int Data);
    void RemoveFirst();
    void PrintLinkedList();
    int Size();
};
//===============================================
void LinkedList::AddToFirst(Link *NewLink){
    NewLink->NextLink = pFirst;//NewLink (NextLink) store the add of pFirst
    pFirst = NewLink; //pFirst store the address the new link
    Counter++;
};
//===============================================
void LinkedList::PrintLinkedList(){
    Link *TmpLink = new Link();
    TmpLink = pFirst;
    while(TmpLink != NULL){
        cout<< TmpLink->IntData << "-->";
        TmpLink = TmpLink->NextLink;
    }
    cout<< endl;
};

void LinkedList::AddToFirstWithValue(int Data){
    Link *NewLink = new Link(Data);
    LinkedList::AddToFirst(NewLink);
};
int LinkedList::Size(){
    Link *TmpLink = new Link();
    TmpLink = pFirst;
    int count = 0;
    while( TmpLink != NULL ){
        count++;
        TmpLink = TmpLink->NextLink;
    }
    return count;
};

void LinkedList::RemoveFirst(){
    Link *DeletedLink = new Link();
    DeletedLink = pFirst;
    pFirst = DeletedLink->NextLink;
    delete DeletedLink;
    Counter--;
};

/*
 * 
 */
int main(int argc, char** argv) {
    LinkedList *MyLinkedList = new LinkedList();
    Link *NewLink = new Link();
    MyLinkedList->AddToFirst(NewLink);
    MyLinkedList->PrintLinkedList();
    MyLinkedList->AddToFirstWithValue(20);
    MyLinkedList->PrintLinkedList();
    MyLinkedList->AddToFirstWithValue(22);
    MyLinkedList->PrintLinkedList();
    
    Link *TmpLink = new Link();
    TmpLink = MyLinkedList->pFirst;
    cout<< TmpLink->IntData << endl;
    cout<< TmpLink->NextLink->NextLink->IntData << endl;
    
    cout << MyLinkedList->Size();
    cout << MyLinkedList->Counter;
    
    MyLinkedList->RemoveFirst();
    cout << MyLinkedList->Size() << endl;
    cout << MyLinkedList->Counter<< endl;
    MyLinkedList->PrintLinkedList();
    return 0;
}

