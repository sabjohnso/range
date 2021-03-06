/**

   @file
   replace_if_test.cpp

   @brief
   Test the range based replace_if function.

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

  std::vector< int > x = { 1, 2, 3, 4, 5 };
  range::replace_if( x, []( auto a ){ return a == 3; }, 4 );

  COMBINE_TEST_EQUAL( x.size(), 5 );
  auto it = begin( x );
  for( int i = 1; i <= 5; ++i, ++it )
  {
    if( i == 3 )
    {
      COMBINE_TEST_EQUAL( 4, *it );
    }
    else
    {
      COMBINE_TEST_EQUAL( i, *it );
    }
  }
  
  return 0;
}
