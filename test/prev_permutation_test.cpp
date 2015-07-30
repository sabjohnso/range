/**
   
   @file
   prev_permutation_test.cpp

   @brief
   Test for the range based prev_permutation function.

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
    std::vector<int> x = { 3, 2, 1 };
    COMBINE_TEST_TRUE( range::prev_permutation( x ));
    
    std::vector<int> xexpected = { 3, 1, 2 };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected)));
  }
  {
    std::vector<int> x = { 1, 2, 3 };
    COMBINE_TEST_FALSE( range::prev_permutation( x ));
  }


  {
    auto comp = []( auto a, auto b ){ return a < b; };
    std::vector<int> x = { 3, 2, 1 };
    COMBINE_TEST_TRUE( range::prev_permutation( x, comp ) );
    
    std::vector<int> xexpected = { 3, 1, 2 };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected)));
  }
  {
    auto comp = []( auto a, auto b ){ return a < b; };
    std::vector<int> x = { 1, 2, 3 };
    COMBINE_TEST_FALSE( range::prev_permutation( x, comp ) );
  }
  


  return 0;
  
} 
