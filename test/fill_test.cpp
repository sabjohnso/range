/**

   @file
   fill_test.cpp
   
   @brief
   Test the range based fill function.

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel B. Johnson <sabjohnso@yahoo.com>
   
*/

// Standard header files

#include <vector>


// Third-party header filse

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>


int
main( int argc, char** argv )
{
  std::vector< int > x( 10 );
  range::fill( x, 2 );

  COMBINE_TEST_EQUAL( x.size(), 10 );
  for( auto it = begin( x ); it != end( x ); ++it )
  {
    COMBINE_TEST_EQUAL( *it, 2 );
  }
  
  
  return 0;
}
