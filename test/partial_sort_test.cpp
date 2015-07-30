/**
   @file
   partial_sort_test.cpp

   @brief
   Test the range based partial_sort function.

   @copyright	
   2015 Samuel B. Johnson

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
  
  std::vector<int> x = {5, 4, 3, 2, 1 };
  range::partial_sort( x, 2 );

  {
    std::vector<int> xexpected  { 1, 2, 5, 4, 3, };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));
  }

  range::partial_sort( x, 2, []( auto a, auto b ){ return a > b; });
  {
    std::vector<int> xexpected { 5, 4, 1, 2, 3 };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));
  }
    
  

  
  return 0;
}
