/**
   @file
   stable_sort_test.cpp

   @brief
   Test the range based stable_sort function.

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
  std::vector<int> x = { 1, 2, 3, 4, 5 };
  std::random_shuffle( begin( x ), end( x ));
  range::stable_sort( x );

  {
    COMBINE_TEST_EQUAL( x.size(), 5 );
    int i = 1;
    for( auto it = begin( x ); it != end( x ); ++it, ++i )
    {
      COMBINE_TEST_EQUAL( *it, i );
    }
  }

  range::stable_sort( x, []( auto a, auto b ){ return a >= b; });
  {
    COMBINE_TEST_EQUAL( x.size(), 5 );
    int i = 0;
    for( auto it = begin( x ); it != end( x ); ++it, ++i )
    {
      COMBINE_TEST_EQUAL( *it, 5-i );
    }
  }
 
  return 0;
}
