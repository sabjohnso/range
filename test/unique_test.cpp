/**
   
   @file
   unique_test.cpp

   @brief
   Test the range based unique function.
   
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
  {
    std::vector< int > x = { 1, 2, 3, 4, 5 };
    auto it = range::unique( x );
    COMBINE_TEST_EQUAL( std::distance( end( x ), it ), 0 );
    int j = 1;
    for( auto jt = begin( x ); jt != end( x ); ++jt, ++j )
    {
      COMBINE_TEST_EQUAL( *jt, j );
    }
  }

  {
    std::vector< int > x = { 1, 2, 2, 3, 4, 5 };
    auto it = range::unique( x );
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), x.size()-1 );
    x.resize( std::distance( begin( x ), it ));
    int j = 1;
    for( auto jt = begin( x ); jt != end( x ); ++jt, ++j )
    {
      COMBINE_TEST_EQUAL( *jt, j );
    }
  }


  
  return 0;
}
