/**
   @file
   make_heap_test.cpp

   @brief
   Test for the range based make_heap function.

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
    std::vector<int> x = { 1, 2, 3, 4, 5 };
    COMBINE_TEST_FALSE( std::is_heap( begin( x ), end( x  )));
    
    range::make_heap( x );

    COMBINE_TEST_TRUE( std::is_heap( begin( x ), end( x )));
  }


  {
    auto comp = []( auto a, auto b ){ return a < b; };
    std::vector<int> x = { 1, 2, 3, 4, 5 };
    
    COMBINE_TEST_FALSE( std::is_heap( begin( x ), end( x  ), comp));
    
    range::make_heap( x, comp );
    
    COMBINE_TEST_TRUE( std::is_heap( begin( x ), end( x ), comp));
  }


  
  return 0;
} 
