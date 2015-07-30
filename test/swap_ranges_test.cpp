/**

   @file
   swap_ranges_test.cpp

   @brief
   Test the range based swap_ranges function

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel B. Johnson <sabjohnso@yahoo.com>
   
 */

// Standard header files

#include <vector>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>


int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 4, 5, 6 };
  std::vector< int > y = { 7, 8, 9, 10, 11, 12 };

  COMBINE_TEST_EQUAL( x.size(), y.size());
  range::swap_ranges( x, y );

  std::vector< int > yexpected = { 1, 2, 3, 4, 5, 6 };
  std::vector< int > xexpected = { 7, 8, 9, 10, 11, 12 };

  COMBINE_TEST_EQUAL( x.size(), xexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));

  COMBINE_TEST_EQUAL( y.size(), yexpected.size());
  COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));
  
  
  return 0;


}
