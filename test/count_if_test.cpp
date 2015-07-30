/**
   @file
   count_if_test.cpp

   @brief
   A test for the range based count_if function.

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
  COMBINE_TEST_EQUAL( range::count_if( x, []( int a ){ return a == 1; }), 1 );
  COMBINE_TEST_EQUAL( range::count_if( x, []( int a ){ return a == 2; } ), 1 );
  COMBINE_TEST_EQUAL( range::count_if( x, []( int a ){ return a == 3; } ), 1 );

  // There are two 4s.
  COMBINE_TEST_EQUAL( range::count_if( x, []( int a ){ return a == 4; } ), 2 );

  COMBINE_TEST_EQUAL( range::count_if( x, []( int a ){ return a == 5; } ), 1 );

  // There are not any 6s.
  COMBINE_TEST_EQUAL( range::count_if( x, []( int a ){ return a == 6; } ), 0 );

  
  COMBINE_TEST_EQUAL( range::count_if( x, []( int a ){ return true; }), x.size());
  

  return 0;
}
