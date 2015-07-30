/**
   @file
   count_test.cpp

   @brief
   A test for the range based count function.

   @copyright
   2015 Samuel B. Johnson

   @author
   Samuel B. Johnson <sabjohnso@yahoo.com>
*/


// Standard header files

#include <iterator>
#include <vector>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 4, 4, 5 };
  COMBINE_TEST_EQUAL( range::count( x, 1 ), 1 );
  COMBINE_TEST_EQUAL( range::count( x, 2 ), 1 );
  COMBINE_TEST_EQUAL( range::count( x, 3 ), 1 );

  // There are two 4s.
  COMBINE_TEST_EQUAL( range::count( x, 4 ), 2 );

  COMBINE_TEST_EQUAL( range::count( x, 5 ), 1 );

  // There are not any 6s.
  COMBINE_TEST_EQUAL( range::count( x, 6 ), 0 );

  return 0;
}
