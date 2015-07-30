/**
   
   @file
   nth_element_test.cpp

   @brief
   Test the range based nth_element function.

   @copyright	
   2015 Samuel B. Johnsonn

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

 */


// Standard header files

#include <algorithm>
#include <vector>
#include <iterator>


// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{

  size_t n = 2;
  std::vector<int> x = { 6, 5, 4, 3, 2, 1 };
  range::nth_element( x, n );


  auto itn = begin( x )+n;
  for( auto it = begin( x ); it != itn; ++it )
  {
    COMBINE_TEST_TRUE(( *it < *itn ));
  }

  for( auto it = itn+1; it != end( x ); ++it )
  {
    COMBINE_TEST_TRUE(( *it > *itn ));
  }


  
  return 0;
  
} 
