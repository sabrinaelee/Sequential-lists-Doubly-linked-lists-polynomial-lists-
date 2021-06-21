#include "sequential-list.h"
#include <iostream>
using namespace std;

SequentialList::SequentialList(unsigned int cap){
//create new sequentialList w/ given number of elements
capacity_ = cap;
size_ = 0; //set size of data_ to zero in case of undefined size
data_ = new DataType[cap];//make datatype array to store elements
}

SequentialList::~SequentialList(){//destructor
    delete [] data_;
    data_ = nullptr; //implement this to avoid dangling pointers after deletion
}

unsigned int SequentialList::size() const{
    //return max number of elements in list
    return size_;
}

unsigned int SequentialList::capacity() const{
    //returns max number of elements the list can hold
    return capacity_;
}

bool SequentialList::empty() const{
//Returns true if the list is empty, false otherwise
    if(size_ == 0){//check if the size of the list is equal to zero which means it is zero
        return true;
    }
    else{
        return false;
    }
}

bool SequentialList::full() const{
//Returns true if the list is at capacity, false otherwise
    if(size_== capacity_){//check if the size of the list is full by checking if the capacity of the list has been filled by size
        return true;
    }
    else{
        return false;
    }
}

SequentialList::DataType SequentialList::select(unsigned int index) const{
//Return value at given index in list. If index is invalid, return value of last element
    if(index >= 0 && index < size_){//check that index is valid
         return data_[index];//returns the value at the given index
    }
    else{
        return data_[size_-1];//if the index is not valid, return the value of the last element
    }
}

unsigned int SequentialList::search(DataType val) const{
//Search for given value + head to tail + return value index (for first time value found) + return list size if no value found
for(int i = 0; i < size_; i++){ //iterate from the beginning of the list to the last value in the list
    if (val == data_[i]){//check if the indicated value is equal to the value at the index, if yes, then the value has been found, if no, continue iterating
        return i;//return the value is found
    }
}
return size_;//return the list size is no value is found
}

void SequentialList::print() const{ //print list elements to stdout
   if (size_ == 0){//check if data_ is empty
       cout<<"List is empty"<<endl;//if empty, output a message indicating that no values have been found
   }
   else{//when data_ is populated
       for(int i = 0; i < size_; i++){//iterate through the list
           cout<< data_[i];//output the values of the list
       }
   }
}

bool SequentialList::insert(DataType val, unsigned int index){
//insert value into list at given index + return true is successful and false otherwise
    if(size_ == capacity_){//check if the list is full
        return false;
    }
    else{
        if(index >= 0 && index <= size_){//if the list isn't full, check if the index is valid
            for(int i = size_; i>index;i--){//iterate through the list until the index is reached
                data_[i] = data_[i-1];//shift values in data_ to the right to leave the desired node empty
            }
            data_[index] = val;//insert the value into the desired node
            size_=size_+1;//update the size of the list
            return true;
        }
        else{
            return false;
        }
    }
}

bool SequentialList::insert_front(DataType val){
//insert value at beginning of list + return true if successful and false otherwise
if(size_ == capacity_){//check if the list is full
    return false;
}
else{
        insert(val,0);//insert val in the head node of data_
        return true;
        }
}

bool SequentialList::insert_back(DataType val){
//insert value at end of list + return true if successful and false otherwise
if(size_ == capacity_){//check if data_ is full
    return false;
    }
else{
    data_[size_] = val;//if not full, insert the value into data_
    size_=size_+1;//update the size of the list
        return true;
    }
}

bool SequentialList::remove(unsigned int index){
 //delete value from list at given index
    if (size_==0 || index >= size_){//check if index is valid
        return false;
    }
 for(int i = index; i < size_-1; i++){//iterate through the list
     data_[i] = data_[i+1];//shift values over by 1 to remove value at index
 }
 size_ = size_ - 1; //update the size of the list
 return true;
}

bool SequentialList::remove_front(){
//delete value at beginning of list + return true is successful and false otherwise
    if(size_ == 0){//if data_ is empty, there are no values to delete, return false
        return false;
    }
    else{
        for(int i = 0; i <= size_-1; i++){
            data_[i] = data_[i+1];//shift values over by 1 to remove value at index
         }
        size_ = size_ - 1;//adjust the size of the list
        return true;
    }
}

bool SequentialList::remove_back(){
 //deletes value at end of list + returns true is successful + false otherwise
    if(size_ == 0){//if data_ is empty, there are no values to delete, return false
        return false;
    }
    else{
        data_[size_-1] = 0;//delete value at end
        size_ = size_ - 1; //update list size
        return true;
    }
}

bool SequentialList::replace(unsigned int index, DataType val){
 //replace the value at the given index with the given value
    if(index > 0 && index < size_){ //to use replace, index must be non-negative and less than size
        replace (index,val);//replace the value at the given index
        return true;
    }
    return false;
}

