/**
   
   @file
   is_heap_until_test.cpp

   @brief
   Test for the range based is_heap_until function.

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
    std::make_heap( begin( x ), end( x ));
  
    COMBINE_TEST_TRUE( std::is_heap( begin( x ), end( x )));

    x.push_back( 6 );

    COMBINE_TEST_FALSE( std::is_heap( begin( x ), end( x )));

    auto it = range::is_heap_until( x );

    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 5 );
  }

  {
    
    auto comp = []( auto a, auto b ){ return a < b; };
    
    std::vector<int> x = { 1, 2, 3, 4, 5 };
    std::make_heap( begin( x ), end( x ), comp );
  
    COMBINE_TEST_TRUE( std::is_heap( begin( x ), end( x ), comp ));

    x.push_back( 6 );

    COMBINE_TEST_FALSE( std::is_heap( begin( x ), end( x ), comp ));

    auto it = range::is_heap_until( x, comp );

    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 5 );
    
  }
  
  return 0;
  
} 
