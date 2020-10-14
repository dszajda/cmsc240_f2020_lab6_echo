#ifndef __CHARACTER_VECTOR_H__
#define __CHARACTER_VECTOR_H__

#include <vector>

// forward declarations
class DoubleVector;
class IntegerVector;

class CharacterVector
{
   private:
      std::vector<char> characterVector;

   public:
	int intVectorSize = static_cast<int> (characterVector.size()); 
      CharacterVector();
      ~CharacterVector();

      int  size();
      char get(int index);
      void put(char value, int index);
      void put(char value);

      void appendDoubleVector(DoubleVector& doubleVector);
      void appendIntegerVector(IntegerVector& integerVector);
};

#endif
