/****************************************************
You can use this file to test if your code is working
properly by designing your own test case and test code.
****************************************************/
//#ifndef A1_TESTS_HPP
//#define A1_TESTS_HPP
//
//#include "doubly-linked-list.h"
//#include "sequential-list.h"
//#include "polynomial.h"
//#include <sstream>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//#define ASSERT_TRUE(T) if (!(T)) return false;
//#define ASSERT_FALSE(T) if ((T)) return false;
//
//class PolynomialTest
//{
//public:
//    bool test1()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a[] = {0,1,2,3,4,5};
//        Polynomial* p1 = new Polynomial(a, 6);
//        p1->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("5x^5 + 4x^4 + 3x^3 + 2x^2 + 1x^1") != string::npos);
//        return true;
//    }
//
//    bool test2()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a[] = {-5,-4,-3,-2,-1,0};
//        Polynomial* p1 = new Polynomial(a, 6);
//        p1->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("(-1)x^4 + (-2)x^3 + (-3)x^2 + (-4)x^1 + (-5)x^0") != string::npos);
//        return true;
//    }
//
//    bool test3()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a[] = {-3,-2,-1,0,1,2,3};
//        Polynomial* p1 = new Polynomial(a, 7);
//        p1->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("3x^6 + 2x^5 + 1x^4 + (-1)x^2 + (-2)x^1 + (-3)x^0") != string::npos);
//        return true;
//    }
//
//    bool test4()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a[] = {0,0,0,1,0,0,0};
//        Polynomial* p1 = new Polynomial(a, 7);
//        p1->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("1x^3") != string::npos);
//        return true;
//    }
//
//    bool test5()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a1[] = {0,2,4,6,8};
//        int a2[] = {9,7,5,3,1};
//        Polynomial* p1 = new Polynomial(a1, 5);
//        Polynomial* p2 = new Polynomial(a2,5);
//        Polynomial* p3 = p1->sub(p2);
//        p3->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("7x^4 + 3x^3 + (-1)x^2 + (-5)x^1 + (-9)x^0") != string::npos);
//        return true;
//    }
//    bool test6()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a1[] = {6,5,4,3,2,1};
//        int a2[] = {3,0,2,0,1};
//        Polynomial* p1 = new Polynomial(a1, 6);
//        Polynomial* p2 = new Polynomial(a2,5);
//        Polynomial* p3 = p1->sub(p2);
//        p3->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("1x^5 + 1x^4 + 3x^3 + 2x^2 + 5x^1 + 3x^0") != string::npos);
//        return true;
//    }
//    bool test7()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a1[] = {0,2,4,6,8};
//        int a2[] = {9,7,5,3,1};
//        Polynomial* p1 = new Polynomial(a1, 5);
//        Polynomial* p2 = new Polynomial(a2,5);
//        Polynomial* p3 = p1->add(p2);
//        p3->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("9x^4 + 9x^3 + 9x^2 + 9x^1 + 9x^0") != string::npos);
//        return true;
//    }
//    bool test8()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a1[] = {6,5,4,3,2,1};
//        int a2[] = {3,0,2,0,1};
//        Polynomial* p1 = new Polynomial(a1, 6);
//        Polynomial* p2 = new Polynomial(a2,5);
//        Polynomial* p3 = p1->add(p2);
//        p3->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("1x^5 + 3x^4 + 3x^3 + 6x^2 + 5x^1 + 9x^0") != string::npos);
//        return true;
//    }
//    bool test9()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//       cout.rdbuf(oss.rdbuf());
//        int a1[] = {0,2,4,6,8};
//        int a2[] = {9,7,5,3,1};
//        Polynomial* p1 = new Polynomial(a1, 5);
//        Polynomial* p2 = new Polynomial(a2,5);
//        Polynomial* p3 = p1->mul(p2);
//        p3->print();
//     cout.rdbuf(p_cout_steambuf);
//
//       ASSERT_TRUE(oss && oss.str().find("8x^8 + 30x^7 + 62x^6 + 100x^5 + 140x^4 + 92x^3 + 50x^2 + 18x^1") != string::npos);
//        return true;
//    }
//    bool test10()
//    {
//        ostringstream oss;
//        streambuf* p_cout_steambuf = cout.rdbuf();
//        cout.rdbuf(oss.rdbuf());
//        int a1[] = {6,5,4,3,2,1};
//        int a2[] = {3,0,2,0,1};
//        Polynomial* p1 = new Polynomial(a1, 6);
//        Polynomial* p2 = new Polynomial(a2,5);
//        Polynomial* p3 = p1->mul(p2);
//        p3->print();
//        cout.rdbuf(p_cout_steambuf);
//        ASSERT_TRUE(oss && oss.str().find("1x^9 + 2x^8 + 5x^7 + 8x^6 + 14x^5 + 20x^4 + 19x^3 + 24x^2 + 15x^1 + 18x^0") != string::npos);
//        return true;
//    }
//};
//
//string get_status_str(bool status)
//{
//    return status ? "TEST PASSED" : "TEST FAILED";
//}
//
//int main(){
///*    int test[6] = {0,1,2,3,4,5};
//
//    Polynomial *nice = new Polynomial(test, 6);
//
//    nice->print();*/
//
//    int grade = 10;
//
//    PolynomialTest poly_test;
//
//    string poly_test_descriptions[10] = {
//            "Test1: new polynomial with some positive numbers",
//            "Test2: new polynomial with some negative numbers",
//            "Test3: new polynomial with some positive and negative numbers",
//            "Test4: new polynomial with some zeros and ones",
//            "Test5: sub function testing",
//            "Test6: sub function testing",
//            "Test7: add function testing",
//            "Test8: add function testing",
//            "Test9: mul function testing",
//            "Test10: mul function testing"
//    };
//
//    bool poly_test_results[10] = {0,0,0,0,0,0,0,0,0,0};
//    poly_test_results[0] = poly_test.test1();
//    poly_test_results[1] = poly_test.test2();
//    poly_test_results[2] = poly_test.test3();
//    poly_test_results[3] = poly_test.test4();
//    poly_test_results[4] = poly_test.test5();
//    poly_test_results[5] = poly_test.test6();
//    poly_test_results[6] = poly_test.test7();
//    poly_test_results[7] = poly_test.test8();
//    poly_test_results[8] = poly_test.test9();
//    poly_test_results[9] = poly_test.test10();
//
//    cout << "POLYNOMIAL TESTING RESULTS \n";
//    cout << "********************************** \n";
//    for (int i = 0; i < 10; ++i) {
//        cout << poly_test_descriptions[i] << endl << get_status_str(poly_test_results[i]) << endl;
//        if (poly_test_results[i]) grade += 1;
//    }
//    cout << endl << "Total grade: " << grade << endl;
//}
//
//
//#endif

#ifndef A1_TESTS_HPP
#define A1_TESTS_HPP

#include "doubly-linked-list.h"
#include "sequential-list.h"
#include "polynomial.h"

#define ASSERT_TRUE(T) \
    if (!(T))          \
        return false;
#define ASSERT_FALSE(T) \
    if ((T))            \
        return false;

class SequentialListTest
{
public:
    // New empty list is valid
    bool test1()
    {
        unsigned int capacity = 5;
        SequentialList list(capacity);

        ASSERT_TRUE(list.size() == 0)
        ASSERT_TRUE(list.capacity() == capacity)
        ASSERT_TRUE(list.empty() == true)
        ASSERT_TRUE(list.full() == false)
        return true;
    }

    // insert_front() and insert_back() on zero-element list
    bool test2()
    {
        unsigned int capacity = 5;
        SequentialList list1(capacity);
        SequentialList list2(capacity);
        ASSERT_TRUE(list1.insert_front(100))
        ASSERT_TRUE(list2.insert_back(100))

        ASSERT_TRUE(list1.size() == list2.size() && list1.size() == 1)
        ASSERT_TRUE(list1.data_ != NULL)
        ASSERT_TRUE(list2.data_ != NULL)
        ASSERT_TRUE(list1.select(0) == list2.select(0) && list1.select(0) == 100)
        return true;
    }

    // select() and search() work properly
    bool test3()
    {
        unsigned int capacity = 5;
        SequentialList list(capacity);
        for (unsigned int i = 0; i < capacity; i++)
        {
            ASSERT_TRUE(list.insert_back(i * 100))
        }

        unsigned int idx = 3;
        ASSERT_TRUE(list.search(list.select(idx)) == idx)
        ASSERT_TRUE(list.select(capacity + 1) == list.select(capacity))
        ASSERT_TRUE(list.search(1000) == list.size())

        for (unsigned int i = 0; i < capacity; i++)
        {
            ASSERT_TRUE(list.select(i) == i * 100 && list.data_[i] == i * 100)
        }
        return true;
    }

    // remove_front() and remove_back() on one-element list
    bool test4()
    {
        unsigned int capacity = 5;
        SequentialList list1(capacity);
        SequentialList list2(capacity);
        ASSERT_TRUE(list1.insert_front(100))
        ASSERT_TRUE(list2.insert_front(100))
        ASSERT_TRUE(list1.remove_front())
        ASSERT_TRUE(list2.remove_back())

        ASSERT_TRUE(list1.size_ == list2.size_ && list1.size_ == 0)
        ASSERT_TRUE(list1.empty() == true && list2.empty() == true)
        return true;
    }

    // Inserting too many elements should fail
    bool test5()
    {
        unsigned int capacity = 5;
        SequentialList list(capacity);
        // Fill up the list.
        for (unsigned int i = 0; i < capacity; i++)
        {
            ASSERT_TRUE(list.insert_back(i))
        }

        // Try overfilling (they should all return false with no modifications).
        int val_not_inserted = 100;
        ASSERT_FALSE(list.insert_back(val_not_inserted))
        ASSERT_FALSE(list.insert_front(val_not_inserted))
        ASSERT_FALSE(list.insert(val_not_inserted, 3))

        // Check size is correct.
        ASSERT_TRUE(list.full() == true && list.empty() == false)
        ASSERT_TRUE(list.size_ == list.capacity_ && list.capacity_ == capacity)

        return true;
    }

    // insert_front() keeps moving elements forward
    bool test6()
    {
        unsigned int capacity = 5;
        SequentialList list(capacity);
        for (unsigned int i = 0; i < capacity; i++)
        {
            ASSERT_TRUE(list.insert_front(i))
            ASSERT_TRUE(list.size_ == (i + 1))
            for (int j = 0; j <= i; j++)
            {
                SequentialList::DataType expected_value = i - j;
                ASSERT_TRUE(list.data_[j] == expected_value)
            }
        }
        return true;
    }

    // inserting at different positions in the list succeeds
    bool test7()
    {
        unsigned int capacity = 10;
        SequentialList list(capacity);
        for (int i = 0; i < 4; i++)
        {
            ASSERT_TRUE(list.insert_back(i))
        }
        ASSERT_TRUE(list.insert(4, 1))
        ASSERT_TRUE(list.insert(5, 1))
        ASSERT_TRUE(list.insert(6, 5))
        ASSERT_TRUE(list.insert(7, 7))

        // Check that the list has the right values.
        int expected_values[] = {0, 5, 4, 1, 2, 6, 3, 7};
        ASSERT_TRUE(list.size_ == 8)
        for (int i = 0; i < list.size_; i++)
        {
            ASSERT_TRUE(list.data_[i] == expected_values[i])
        }

        return true;
    }

    // try to remove too many elements, then add a few elements
    bool test8()
    {
        unsigned int capacity = 5;
        const int num_elems = 4;
        SequentialList list(capacity);
        for (int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.insert_back(i))
        }
        for (int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.remove_back())
        }

        // Try a bunch of invalid commands.
        ASSERT_FALSE(list.remove_front())
        ASSERT_FALSE(list.remove_front())
        ASSERT_FALSE(list.remove(0))
        ASSERT_TRUE(list.empty() && list.size_ == 0)

        int expected_value = 1234;
        ASSERT_TRUE(list.insert(expected_value, 0))
        ASSERT_TRUE(list.data_[0] == expected_value)
        return true;
    }

    // lots of inserts and deletes, all of them valid
    bool test9()
    {
        unsigned int capacity = 5;
        SequentialList list(capacity);

        ASSERT_TRUE(list.insert_back(32))
        ASSERT_TRUE(list.insert_front(44))
        ASSERT_TRUE(list.insert(12, 2))
        ASSERT_TRUE(list.remove_back())
        ASSERT_TRUE(list.remove_front())
        ASSERT_TRUE(list.insert_back(88))
        ASSERT_TRUE(list.remove(1))
        ASSERT_TRUE(list.insert(99, 0))

        // Check that the list has the right values
        ASSERT_TRUE(list.select(0) == 99 && list.data_[0] == 99)
        ASSERT_TRUE(list.select(1) == 32 && list.data_[1] == 32)

        return true;
    }

    // lots of inserts and deletes, some of them invalid
    bool test10()
    {
        unsigned int capacity = 5;
        SequentialList list(capacity);

        ASSERT_FALSE(list.remove(0))
        ASSERT_TRUE(list.insert_back(32))
        ASSERT_TRUE(list.insert_front(44))
        ASSERT_FALSE(list.insert(12, 3))
        ASSERT_TRUE(list.insert(12, 2))
        ASSERT_TRUE(list.remove_back())
        ASSERT_FALSE(list.remove(5))
        ASSERT_TRUE(list.remove_front())
        ASSERT_TRUE(list.insert_back(88))
        ASSERT_FALSE(list.insert(12345, 6))
        ASSERT_TRUE(list.remove(1))
        ASSERT_TRUE(list.insert(99, 0))

        // Check that the list has the right values
        ASSERT_TRUE(list.select(0) == 99 && list.data_[0] == 99)
        ASSERT_TRUE(list.select(1) == 32 && list.data_[1] == 32)

        return true;
    }
};

class DoublyLinkedListTest
{
public:
    // New empty list is valid
    bool test1()
    {
        DoublyLinkedList list;
        ASSERT_TRUE(list.size() == 0)
        ASSERT_TRUE(list.empty() == true)
        ASSERT_TRUE(list.full() == false)
        ASSERT_TRUE(list.head_ == NULL)
        ASSERT_TRUE(list.tail_ == NULL)
        return true;
    }

    // insert_front() and insert_back() on zero-element list
    bool test2()
    {
        DoublyLinkedList list1, list2;
        list1.insert_front(100);
        list2.insert_back(100);

        ASSERT_TRUE(list1.size() == list2.size() && list1.size() == 1)
        ASSERT_TRUE(list1.head_ != NULL && list1.head_ == list1.tail_)
        ASSERT_TRUE(list2.head_ != NULL && list2.head_ == list2.tail_)
        ASSERT_TRUE(list1.head_->prev == NULL && list1.tail_->next == NULL)
        ASSERT_TRUE(list2.head_->prev == NULL && list2.tail_->next == NULL)
        ASSERT_TRUE(list1.select(0) == list2.select(0) && list1.select(0) == 100)
        return true;
    }

    // select() and search() work properly
    bool test3()
    {
        DoublyLinkedList list;
        const int num_elems = 5;
        for (int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.insert_back(i * 100))
        }

        unsigned int idx = 3;
        ASSERT_TRUE(list.search(list.select(idx)) == idx)
        ASSERT_TRUE(list.select(num_elems + 1) == 400)
        ASSERT_TRUE(list.search(1000) == list.size())

        for (int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.select(i) == i * 100)
        }

        ASSERT_TRUE(list.head_->prev == NULL && list.tail_->next == NULL)

        return true;
    }

    // remove_front() and remove_back() on one-element list
    bool test4()
    {
        DoublyLinkedList list1, list2;
        ASSERT_TRUE(list1.insert_front(100))
        ASSERT_TRUE(list2.insert_front(100))
        ASSERT_TRUE(list1.remove_front())
        ASSERT_TRUE(list2.remove_back())

        ASSERT_TRUE(list1.head_ == NULL && list1.tail_ == NULL)
        ASSERT_TRUE(list2.head_ == NULL && list2.tail_ == NULL)
        ASSERT_TRUE(list1.size_ == list2.size_ && list1.size_ == 0)
        ASSERT_TRUE(list1.empty() == true && list2.empty() == true)
        return true;
    }

    // replace() works properly
    bool test5()
    {
        DoublyLinkedList list;
        const int num_elems = 8;
        for (int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.insert_back(i))
        }

        ASSERT_TRUE(list.replace(0, 8))
        ASSERT_TRUE(list.replace(3, 9))
        ASSERT_TRUE(list.replace(7, 10))

        ASSERT_TRUE(list.head_->value == 8)
        ASSERT_TRUE(list.tail_->value == 10)
        ASSERT_TRUE((list.head_->next->next->next)->value == 9)

        ASSERT_TRUE(list.head_->prev == NULL && list.tail_->next == NULL)
        return true;
    }

    // insert_front() keeps moving elements forward
    bool test6()
    {
        DoublyLinkedList list;
        const int num_elems = 5;
        for (unsigned int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.insert_front(i))
            ASSERT_TRUE(list.size_ == (i + 1))
            ASSERT_TRUE(list.head_->value == i)

            DoublyLinkedList::Node *n = list.head_;
            for (int j = 0; j <= i; j++)
            {
                DoublyLinkedList::DataType expected_value = i - j;
                ASSERT_TRUE(n != NULL && n->value == expected_value)
                n = n->next;
            }
        }
        ASSERT_TRUE(list.head_->prev == NULL && list.tail_->next == NULL)
        return true;
    }

    // inserting at different positions in the list
    bool test7()
    {
        DoublyLinkedList list;
        for (int i = 0; i < 4; i++)
        {
            ASSERT_TRUE(list.insert_back(i))
        }
        ASSERT_TRUE(list.insert(4, 1))
        ASSERT_TRUE(list.insert(5, 1))
        ASSERT_TRUE(list.insert(6, 5))
        ASSERT_TRUE(list.insert(7, 7))

        // Check that the list has the right values
        int expected_values[] = {0, 5, 4, 1, 2, 6, 3, 7};
        ASSERT_TRUE(list.size_ == 8)
        DoublyLinkedList::Node *n = list.head_;
        for (unsigned int i = 0; i < list.size_; i++)
        {
            ASSERT_TRUE(n != NULL && n->value == expected_values[i])
            n = n->next;
        }

        ASSERT_TRUE(list.head_->prev == NULL && list.tail_->next == NULL)
        return true;
    }

    // try to remove too many elements, then add a few elements
    bool test8()
    {
        DoublyLinkedList list;
        const int num_elems = 4;
        for (int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.insert_back(i))
        }
        for (int i = 0; i < num_elems; i++)
        {
            ASSERT_TRUE(list.remove_back())
        }

        // Try a bunch of invalid commands.
        ASSERT_FALSE(list.remove_front())
        ASSERT_FALSE(list.remove_front())
        ASSERT_FALSE(list.remove(0))
        ASSERT_TRUE(list.empty() && list.size() == 0)

        int expected_value = 1234;
        ASSERT_TRUE(list.insert(expected_value, 0))
        ASSERT_TRUE(list.head_->value == expected_value &&
                    list.tail_->value == expected_value)

        ASSERT_TRUE(list.head_->prev == NULL && list.tail_->next == NULL)
        ASSERT_TRUE(list.head_ == list.tail_)
        return true;
    }

    // lots of inserts and deletes, all of them valid
    bool test9()
    {
        DoublyLinkedList list;

        ASSERT_TRUE(list.insert_back(32))
        ASSERT_TRUE(list.insert_front(44))
        ASSERT_TRUE(list.insert(12, 2))
        ASSERT_TRUE(list.remove_back())
        ASSERT_TRUE(list.remove_front())
        ASSERT_TRUE(list.insert_back(88))
        ASSERT_TRUE(list.remove(1))
        ASSERT_TRUE(list.insert(99, 0))

        // Check that the list has the right values
        ASSERT_TRUE(list.select(0) == 99 && list.head_->value == 99)
        ASSERT_TRUE(list.select(1) == 32 && list.tail_->value == 32)

        ASSERT_TRUE(list.head_->next == list.tail_ && list.tail_->prev == list.head_)
        ASSERT_TRUE(list.head_->prev == NULL && list.tail_->next == NULL)
        return true;
    }

    // lots of inserts and deletes, some of them invalid
    bool test10()
    {
        DoublyLinkedList list;

        ASSERT_FALSE(list.remove(0))
        ASSERT_TRUE(list.insert_back(32))
        ASSERT_TRUE(list.insert_front(44))
        ASSERT_FALSE(list.insert(12, 3))
        ASSERT_TRUE(list.insert(12, 2))
        ASSERT_TRUE(list.remove_back())
        ASSERT_FALSE(list.remove(5))
        ASSERT_TRUE(list.remove_front())
        ASSERT_TRUE(list.insert_back(88))
        ASSERT_FALSE(list.insert(12345, 6))
        ASSERT_TRUE(list.remove(1))
        ASSERT_TRUE(list.insert(99, 0))

        // Check that the list has the right values
        ASSERT_TRUE(list.select(0) == 99 && list.head_->value == 99)
        ASSERT_TRUE(list.select(1) == 32 && list.tail_->value == 32)

        ASSERT_TRUE(list.head_->next == list.tail_ && list.tail_->prev == list.head_)
        ASSERT_TRUE(list.head_->prev == NULL && list.tail_->next == NULL)
        return true;
    }
};

class PolynomialTest
{
public:
    void test1()
    {
        int a[] = {1, 0, 0, -2, 3, 5};
        int size = 6;
        Polynomial poly(a, size);
        poly.print();
    }
    void test2()
    {
        int a[] = {0, 0, -3, 0, 0};
        int size = 5;
        Polynomial poly(a, size);
        poly.print();
    }
    void test3()
    {
        int a[] = {2, 0, 0, 0};
        int size = 4;
        Polynomial poly(a, size);
        poly.print();
    }
    void test4()
    {
        int a[] = {0, 0, 0, 1};
        int size = 4;
        Polynomial poly(a, size);
        poly.print();
    }
    void test5()
    {
        int a[] = {9, 8, 1};
        int b[] = {-5, 7, 0, 8};
        int sizea = 3;
        int sizeb = 4;
        Polynomial polya(a, sizea);
        Polynomial polyb(b, sizeb);
        polya.mul(&polyb)->print();
    }
    void test6()
    {
        int a[] = {2, -5, 7};
        int b[] = {9, 0, -2, -6, 3};
        int sizea = 3;
        int sizeb = 5;
        Polynomial polya(a, sizea);
        Polynomial polyb(b, sizeb);
        polya.mul(&polyb)->print();
    }
    void test7()
    {
        int a[] = {10, 5, 9, 8, -5, 7};
        int b[] = {0, 4, 3};
        int sizea = 6;
        int sizeb = 3;
        Polynomial polya(a, sizea);
        Polynomial polyb(b, sizeb);
        polya.mul(&polyb)->print();
    }
    void test8()
    {
        int a[] = {8, 9, 4, 6};
        int b[] = {9, 6, 0, 0, 4, 3};
        int sizea = 4;
        int sizeb = 6;
        Polynomial polya(a, sizea);
        Polynomial polyb(b, sizeb);
        polya.mul(&polyb)->print();
    }
    void test9()
    {
        int a[] = {5, -7, 9};
        int b[] = {0, 5, 3};
        int sizea = 3;
        int sizeb = 3;
        Polynomial polya(a, sizea);
        Polynomial polyb(b, sizeb);
        polya.mul(&polyb)->print();
    }
    void test10()
    {
        int a[] = {9, 4, 6, 3};
        int b[] = {2, 2};
        int sizea = 4;
        int sizeb = 2;
        Polynomial polya(a, sizea);
        Polynomial polyb(b, sizeb);
        polya.mul(&polyb)->print();
    }
};

string get_status_str(bool status)
{
    return status ? "TEST PASSED" : "TEST FAILED";
}

int main()
{
    int grade = 0;
    SequentialListTest seq_test;
    DoublyLinkedListTest linked_test;
    PolynomialTest poly_test;

    /*string seq_test_descriptions[10] = {
            "Test1: New empty list is valid",
            "Test2: insert_front() and insert_back() on zero-element list",
            "Test3: select() and search() work properly",
            "Test4: remove_front() and remove_back() on one-element list",
            "Test5: Inserting too many elements should fail",
            "Test6: insert_front() keeps moving elements forward",
            "Test7: inserting at different positions in the list",
            "Test8: try to remove too many elements, then add a few elements",
            "Test9: lots of inserts and deletes, all of them valid",
            "Test10: lots of inserts and deletes, some of them invalid"};

    bool seq_test_results[10];
    seq_test_results[0] = seq_test.test1();
    seq_test_results[1] = seq_test.test2();
    seq_test_results[2] = seq_test.test3();
    seq_test_results[3] = seq_test.test4();
    seq_test_results[4] = seq_test.test5();
    seq_test_results[5] = seq_test.test6();
    seq_test_results[6] = seq_test.test7();
    seq_test_results[7] = seq_test.test8();
    seq_test_results[8] = seq_test.test9();
    seq_test_results[9] = seq_test.test10();

    cout << "SEQUENTIAL LIST TESTING RESULTS \n";
    cout << "******************************* \n";
    for (int i = 0; i < 10; ++i)
    {
        cout << seq_test_descriptions[i] << endl
             << get_status_str(seq_test_results[i]) << endl;
        if (seq_test_results[i])
            grade += 3;
    }
    grade += 10;
    cout << endl
         << "Total grade: " << grade << endl << endl;

    string linked_test_descriptions[10] = {
            "Test1: New empty list is valid",
            "Test2: insert_front() and insert_back() on zero-element list",
            "Test3: select() and search() work properly",
            "Test4: remove_front() and remove_back() on one-element list",
            "Test5: replace() works properly",
            "Test6: insert_front() keeps moving elements forward",
            "Test7: inserting at different positions in the list",
            "Test8: try to remove too many elements, then add a few elements",
            "Test9: lots of inserts and deletes, all of them valid",
            "Test10: lots of inserts and deletes, some of them invalid"};

    bool linked_test_results[10];
    linked_test_results[0] = linked_test.test1();
    linked_test_results[1] = linked_test.test2();
    linked_test_results[2] = linked_test.test3();
    linked_test_results[3] = linked_test.test4();
    linked_test_results[4] = linked_test.test5();
    linked_test_results[5] = linked_test.test6();
    linked_test_results[6] = linked_test.test7();
    linked_test_results[7] = linked_test.test8();
    linked_test_results[8] = linked_test.test9();
    linked_test_results[9] = linked_test.test10();

    cout << "DOUBLY LINKED LIST TESTING RESULTS \n";
    cout << "********************************** \n";
    for (int i = 0; i < 10; ++i)
    {
        cout << linked_test_descriptions[i] << endl
             << get_status_str(linked_test_results[i]) << endl;
        if (linked_test_results[i])
            grade += 3;
    }
    grade += 10;
    cout << endl
         << "Total grade: " << grade << endl << endl;*/

    poly_test.test1();
    poly_test.test2();
    poly_test.test3();
    poly_test.test4();
    poly_test.test5();
    poly_test.test6();
    poly_test.test7();
    poly_test.test8();
    poly_test.test9();
    poly_test.test10();
}

#endif
