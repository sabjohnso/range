/**
   
   @file
   merge_test.cpp

   @brief
   Test the range based merge function.

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

  std::vector<int> x = { 1, 2, 4 };
  std::vector<int> y = { 3, 5, 6 };
  std::vector<int> z;

  COMBINE_TEST_TRUE( std::is_sorted( begin( x ), end( x )));
  COMBINE_TEST_TRUE( std::is_sorted( begin( y ), end( y )));

  range::merge( x, y, std::back_inserter( z ));

  std::vector<int> xexpected = { 1, 2, 4 };
  std::vector<int> yexpected = { 3, 5, 6 };
  std::vector<int> zexpected = { 1, 2, 3, 4, 5, 6 };
  
  COMBINE_TEST_EQUAL( x.size(), xexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));

  COMBINE_TEST_EQUAL( y.size(), yexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));

  COMBINE_TEST_EQUAL( z.size(), zexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( z ), end( z ), begin( zexpected )));

 

  
  return 0;
  
} 
 
