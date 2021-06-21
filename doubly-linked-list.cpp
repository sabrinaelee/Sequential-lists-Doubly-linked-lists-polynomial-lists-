#include "doubly-linked-list.h"
#include <iostream>

using namespace std;

DoublyLinkedList::Node::Node(DataType data){
    value = data;
    next = nullptr;
    prev = nullptr;
}

DoublyLinkedList::DoublyLinkedList(){
    //initializes an empty doubly linked list
    head_ = nullptr;
    tail_= nullptr;
    size_ = 0; //set size to zero
}

DoublyLinkedList::~DoublyLinkedList() {
    //destructor frees all dynamically allocated memory
    if (!empty()) {
        Node *placeholder = head_;
        while (placeholder != nullptr) {
            Node *next = placeholder->next;//iterate through the list
            delete placeholder;//delete the value
            placeholder = next;
        }
    } else {
        head_ = tail_ = nullptr;//set the head and tail to NULL
    }
}

unsigned int DoublyLinkedList::size() const{
    //Returns the number of elements nodes in the list
    return size_;
}

unsigned int DoublyLinkedList::capacity() const{
    //Returns the maximum number of elements the list can hold.
    return CAPACITY;
}

bool DoublyLinkedList::empty() const{
    //Returns true if the list is empty, false otherwise.
    if (size_==0){//check if the list is empty
        return true;
    }
    else{//otherwise, return false if it is not empty
        return false;
    }
}

bool DoublyLinkedList::full() const{
    //Returns true if the list is at capacity, false otherwise.
    if(size_==CAPACITY){//check if list is at capacity
        return true;
    }
    else{//otherwise, return false if the list is not at capacity
        return false;
    }
}

DoublyLinkedList::DataType DoublyLinkedList::select(unsigned int index) const{
    //Returns value at given index in list. If index is invalid, return value of last element
    if(empty()){//check if list is empty
        return 0;//if empty, exit out of the function
    }
    //if the list is not empty
    else if (index >= 0 && index < size_){ //check if the index is valid
       Node* select = getNode(index); //set the select node to the node at the index
       return select->value;//return the selected node
   }
    //if the index is not valid
   else{
       return tail_->value;//return value at tail node of list, which will be the last element of the list
   }
}

unsigned int DoublyLinkedList::search(DataType value) const{
    //search for given value (head to tail) return index of value if found
    if(empty()){//check if list is empty
        return 0;//if empty, exit out of the function, since there is nothing to search from
    }

    Node* placeholder = head_;//set placeholder value equal to head
    for(unsigned int i = 0; i < size_;i++){//iterate through the list to search for the value
        if(placeholder->value == value){//check each value at index and compare it against the value you are looking for
            return i;//return index if the value is found
        }
        placeholder = placeholder->next;//if the value is not found, continue to iterate through the list by setting the placeholder value to the value after it
    }
    return size_; //return size of list if no value found within the list
}

void DoublyLinkedList::print() const{
    //print elements
    if(empty()){//check if list is empty
        cout<<"List is empty"<<endl;//output that the list is empty
    return;//if list is empty, exit out of the function
    }

    Node *placeholder = head_;//set placeholder equal to head (start iterating through the list beginning at the head node)
    while(placeholder != nullptr){//iterates through the list to print out all of the elements
        cout<< placeholder->value<< "->"<<endl;//print out the values
        placeholder = placeholder->next; //continues to iterate through the list by setting the placeholder value to the value after it
    }
}

DoublyLinkedList::Node* DoublyLinkedList::getNode(unsigned int index) const{
    //return pointer to node at index
    if(empty()){//check if list is empty
        return 0;//if the list is empty, exit out of the function as there is nothing to look through
    }
    Node* placeholder = head_;//set placeholder equal to head (start iterating through the list beginning at the head node)
    for(unsigned int i = 0; i < index; i++){ //iterate through the list until value at index is reached
        placeholder = placeholder->next;//continues to iterate through the list by setting the placeholder value to the value after it
    }
    return placeholder;//return the pointer for the node at the index
}

bool DoublyLinkedList::insert(DataType value, unsigned int index){
    //Inserts a value into list at a given index. Returns true if successful and false otherwise.
    if(full()||index>size_||index<0){//check if list is full and if index is invalid and return false if any of these are true
        return false;
    }
    else if(index==0) {//check if value is to be inserted into the head node which is at index zero
        return insert_front(value);//use the insert_front function
    }
    else if(index==size_){//check if the value is to be inserted into the tail node which is at index size
        return insert_back(value);//use the insert_back function
    }
    else {
        Node *newValue = new Node(value);
        Node *oldValue = getNode(index);//retrieve the pointer to the index

        //shift the values to make room for the insertion of a new value
        oldValue->prev->next = newValue;//set the position of the old value to new value
        newValue->prev = oldValue->prev;//update new value prev pointer to be old values prev pointer
        oldValue->prev = newValue;//update old value prev pointer to point to the new value
        newValue->next = oldValue;//update the new value next pointer to point to old value that has been shifted over
    }
    size_ = size_ + 1;//update size of the list
    return true;
}

bool DoublyLinkedList::insert_front(DataType value){
    //Inserts a value at beginning of list. Returns true if successful and false otherwise.
    if(full()){//check if list is full
        return false;
    }
    else if (empty()){//check if the list is empty
        head_=tail_ = new Node(value);//set the head and tail node to the new value since theres only one node
        head_->prev = nullptr;//set the dangling head_ pointer to nullptr
        tail_->next=nullptr;//set the dangling tail_ pointer to nullptr
    }
    else{
        Node* placeholder = new Node(value);
        //shift the values to make room for the insertion of a new value
        head_->prev = placeholder;//set the head node previous pointer to the new value
        placeholder->next = head_;//head node is shifted over
        head_ = placeholder; //set the value of the head node to the new value
        placeholder->prev = nullptr;//must set the previous pointer of the newly inserted node to null
    }
    size_=size_+1;//update the size of the list
    return true;
}

bool DoublyLinkedList::insert_back(DataType value){
    //Inserts a value at end of the list. Returns true if successful and false otherwise.
    if(full()){//check if list is full
        return false;
    }
    else if(empty()){//check if the list is empty
        head_=tail_ = new Node(value);//set the head and tail node to the new value since theres only one node
        head_->prev = nullptr;//set the dangling head_ pointer to nullptr
        tail_->next=nullptr;//set the dangling tail_ pointer to nullptr
    }
    else{
        Node* placeholder = new Node(value);
        tail_->next = placeholder;//set the next pointer of the tail to the placeholder value (adding the placeholder node to the back)
        placeholder->prev = tail_;//set the placeholder prev to the tail value (shifts the tail value over)
        tail_=placeholder;//set the new tail value to the placeholder value
        placeholder->next = nullptr;//must set the next pointer of the newly inserted node to null
    }
    size_=size_+1;//update the size of the list
    return true;
}

bool DoublyLinkedList::remove(unsigned int index){
    //Deletes the value from the list at the given index.
    if(empty()||index<0||index>=size_) {//check if list is empty and check if index is valid
        return false;
    }
    else if(index == 0){//if you want to remove the head node, call remove_front
        return remove_front();
        }
    else if(index==size_-1){//if you want to remove the last node, call remove_back
        return remove_back();
    }
    else{
        Node* placeholder = getNode(index);//set the placeholder node to the node at index
        placeholder->prev->next =placeholder->next;//set the next pointer of the value that preceded placeholder to point at the value after placeholder to avoid dangling pointers when placeholder is deleted
        placeholder->next->prev = placeholder->prev;//set the previous pointer of the value that processed placeholder to the value before placeholder to avoid dangling pointers when placeholder is deleted
        delete placeholder; //delete the value at the given index
        }
    }

bool DoublyLinkedList::remove_front(){
    //Deletes value from beginning of list. Returns true if successful and false otherwise.
    if(empty()){//check if the list is empty, if it is, return false
        return false;
    }
    else if(size_==1){//check if there is only one node in the list
        delete head_;//remove the head node (only node)
        head_=tail_=nullptr;//set both head and tail to null to avoid dangling pointers
    }
    else{
        head_ = head_->next;//set the head value to the second value in the list
       delete head_->prev;//delete the value that precedes the new head value aka the original head value
       head_->prev = nullptr; //set the previous pointer to null to avoid dangling pointers
    }
    size_=size_-1;//update the size of the list
    return true;
}

bool DoublyLinkedList::remove_back(){
    //Deletes the value at end of list. Returns true if successful and false otherwise.
    if(empty()){//check if the list is empty, if it is, return false
        return false;
    }
    else if(size_==1){//check if there is only one node in the list
        delete tail_;//remove the head node (only node)
        tail_=head_=nullptr;//set both head and tail to null to avoid dangling pointers
    }
    else{
        tail_ = tail_->prev;//set the tail value to the second last value in the list
        delete tail_->next;//delete the original tail value
        tail_->next=nullptr;//set the tail next pointer to null to avoid dangling pointers
    }
    size_=size_-1;//update the size of the list
    return true;
}

bool DoublyLinkedList::replace(unsigned int index, DataType value){
    //Replaces the value at the given index with the given value.
    if (empty()||index>=size_||index<0){//check if the list is empty and if index is valid
        return false;//exit out of the function if the list is emtpy as there is nothing to replace
    }
    else{
        Node* placeholder = getNode(index);//set placeholder to the node at the given index
        placeholder->value = value;//replace the pointer to the node to the value
        return true;
    }
}

