#ifndef __CHARACTER_VECTOR_CPP__
#define __CHARACTER_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

CharacterVector::CharacterVector()  {}
CharacterVector::~CharacterVector() {}

int CharacterVector::size() 
{  
<<<<<<< HEAD
   return 0;
=======
	int size = static_cast<int>(characterVector.size());
	return size;
>>>>>>> fae50aadb7ba52bf6ad0d5bcc6c94fdf83e1961f
}

// just return the character at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
char CharacterVector::get(int index) 
{ 
<<<<<<< HEAD
   return 0;
=======
   return characterVector.at(index);
>>>>>>> fae50aadb7ba52bf6ad0d5bcc6c94fdf83e1961f
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void CharacterVector::put(char value, int index)
{
	int size = static_cast<int> (characterVector.size());

	if((index > 0) && (index < size)){
	characterVector[index] = value;
}else{
	characterVector.push_back(value);
}
}

// use push_back to append
void CharacterVector::put(char value)
{

	characterVector.push_back(value);

}

// for each double in doubleVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendDoubleVector(DoubleVector& doubleVector)
{

	for (int i = 0; i < intVectorSize; i++) {
	char a = static_cast<char>(doubleVector.get(i));
	characterVector.push_back(a);
}

}

// for each integer in integerVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendIntegerVector(IntegerVector& integerVector)
{

	for (int i = 0; i < intVectorSize; i++) {
	char a = static_cast<char>(integerVector.get(i));
	characterVector.push_back(a);
}
}

#endif
