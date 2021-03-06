#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range
   std::cout << "----------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
 
   dv.put(1.0);
   dv.put(-1.0);
   dv.put(100);

   std::cout << dv.size() << std::endl;
   dv.put(5.0,1);
   dv.put(100.0, 100);
   std::cout << dv.size() << std::endl;
   try {
	std::cout << dv.get(-1) << std::endl;
   }
   catch (const std::out_of_range& oor){
	std::cerr << "Out of Range error: " << oor.what() << std::endl;	
   }
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;

    cv.put('p');
    cv.put('u');
    cv.put('d');
    
   std::cout << cv.size() << std::endl;
       cv.put('a',1);
       cv.put('b', 100);
   std::cout << cv.size() << std::endl;
   try {
    
        std::cout << cv.get(-1) << std::endl;
        
    } catch (const std::out_of_range& oor) {
        
    
        std::cerr << "Out of Range error: " << oor.what() << std::endl;
    }
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << iv.size() << std::endl;
   iv.put(2);
   std::cout << iv.size() << std::endl;
   iv.put(99, 3);
   std::cout << iv.size() << std::endl;
   std::cout << iv.get(1) << "[99]" <<std::endl;
   std::cout << "[out of range error message next line]" << std::endl;
   try{
       std::cout << iv.get(999) << std::endl;
   }catch (const std::out_of_range& oor) {
   std::cerr << "Out of Range error: " << oor.what() << std::endl;
   }   
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;
   dv2.appendCharacterVector(cv);
   dv2.appendIntegerVector(iv);

   std::cout << std::endl;
   std::cout << dv2.size() << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   appendDoubleVector(dv);
   appendCharacterVector(dv);
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
