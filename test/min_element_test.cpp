/**
   
   @file
   min_element_test.cpp

   @brief
   Test for the range based min_element function.

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <vector>
#include <iterator>
#include <algorithm>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>

   
   
int
main( int argc, char** argv )
{
  {
    std::vector<int> x = { 1, 2, 3, 4 };

    std::random_shuffle( begin( x ), end( x ));
    auto it = range::min_element( x );

    COMBINE_TEST_EQUAL( *it, 1 );
  }

  {
    auto comp = []( auto a, auto b ){ return a < b; };
    std::vector<int> x = { 1, 2, 3, 4 };

    std::random_shuffle( begin( x ), end( x ));
    auto it = range::min_element( x, comp );
		
    COMBINE_TEST_EQUAL( *it, 1 );
  }
  
  
  return 0;
  
} 
