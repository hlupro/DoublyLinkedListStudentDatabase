#ifndef STUDENTNODE_H
#define STUDENTNODE_H

#include "student.h" //name is subject to change

template <typename T>
class studentNode
{
public:
  studentNode<T> *next; //Node pointer that points to the next node in the list
  studentNode<T> *prev; //Node pointer that points to the prev node in the list
  T student;            //student will hold an object of type T, which in this case should be a student object.

  studentClass()  //defualt constructor
  {
    next = NULL;
    prev = NULL;
    student = Student();
  }
  studentClass(studentClass *prevNode, studentClass *nextNode, T value)
  {
    prev = prevNode;
    next = nextNode;
    student = value; //Will need to create a copy constructor in studentClass.h
  }                  //non-default constructor will take in two pointers
                     //order to insert a new node between them
                     //May have to include the list as a parameter Will need to test
};

#endif
