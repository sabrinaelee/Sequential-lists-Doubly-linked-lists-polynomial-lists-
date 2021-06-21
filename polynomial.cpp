#include "polynomial.h"
#include <iostream>

using namespace std;
Polynomial::Polynomial(int A[], int size) {
    //class constructor that takes int array and int size as parameters
    //array contains polynomial coefficients
    size_=size;
    for(int i = 0; i<size;i++){//fill up the array
        coefficients.insert_back(A[i]);
    }
}

Polynomial* Polynomial::add(Polynomial* rhs) {
    //computes *this + *rhs
    int max,min;
    int i = 0;
    //determine which polynomial is the longer one and appropriately assign the max length and min length of the array
    if(size_ > rhs->size_){//if rhs polynomial is less than given polynomial
        max = size_;
        min = rhs->size_;
    }
    else{//if rhs polynomial is greater than given polynomial
        min = size_;
        max = rhs->size_;
    }
    //initialize a new array to store the coefficients
    int * temp = new int[max];
    while (i < min){//iterate through until the end of the size of the smallest polynomial
        temp[i] = this->coefficients.select(i) + rhs->coefficients.select(i);//add the coefficients together one by one
        i++;
    }

    while (i < max) {
        if (i < size_) {//if the longer polynomial is not the rhs polynomial
            temp[i] = this->coefficients.select(i);//append the rest of the coefficients onto the end of the new polynomial
        } else {//if the longer polynomial is the rhs polynomial
            temp[i] = rhs->coefficients.select(i);//append the rest of the coefficients onto the end of the new polynomial
        }
        i++;
    }

    return new Polynomial(temp, max);//create the new polynomial
}

Polynomial* Polynomial::sub(Polynomial* rhs) {
    //computes *this - *rhs
    int max,min;
    int i = 0;
    if(size_ > rhs->size_){//if rhs polynomial is less than given polynomial
        max = size_;
        min = rhs->size_;
    }
    else{//if rhs polynomial is greater than given polynomial
        min = size_;
        max = rhs->size_;
    }
    int * temp = new int[max];
    while (i < min){//iterate through until the end of the size of the smallest polynomial
        temp[i] = this->coefficients.select(i) - rhs->coefficients.select(i);//subtract the coefficients
        i++;
    }
    while (i < max) {
        if (i < size_) {//if the longer polynomial is not the rhs polynomial
            temp[i] =  this->coefficients.select(i);//append the rest of the coefficients onto the end of the new polynomial
        } else {//if the longer polynomial is the rhs polynomial
            temp[i] = -1 * rhs->coefficients.select(i); //append the rest of the coefficients onto the end of the new polynomial
        }
        i++;
    }

    return new Polynomial(temp, max);//create the new polynomial

}
Polynomial* Polynomial::mul(Polynomial* rhs) {
    //computes *this * *rhs
    int * temp = new int[size_+rhs->size_-1];

    for (int i = 0; i<size_+rhs->size_-1; i++)
        temp[i] = 0;

    for(int i = 0; i<size_;i++){//first polynomial
        for(int j = 0;j<rhs->size_;j++){//second polynomial
            temp[i+j] += this->coefficients.select(i) * rhs->coefficients.select(j);//multiply the terms
        }
    }
    return new Polynomial(temp,size_+rhs->size_-1);//create the new polynomial
}

void Polynomial::print() {
    int exponent = size_-1;//exponents are printed in descending order

    string res = "";
    for(int i =size_-1;i>=0;i--){
        int coefficient = this->coefficients.select(i);
        //decide where to place plus signs
        if (i == size_-1) {//check if first term, hence no + symbol
            res += "";
        }
        else if(coefficient == 0){//if the coefficient is zero, the term should be skipped, hence no + symbol
            res += "";
        }
        else {//append a + symbol for every other term
            res += " + ";
        }
        //check for non zero coefficient
        if(coefficient != 0 && coefficient > 0){
            res += to_string(coefficient) + "x^" + to_string(exponent);
        }
        //check for negative coefficient->enclose in brackets
        else if (coefficient < 0){
            res += "(" + to_string(coefficient) + ")" + "x^" + to_string(exponent);
        }
        
        exponent--;//update the exponent counter
    }
    cout << res <<endl;//print out the string
}