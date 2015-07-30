/**

   @file
   unique_copy_test.cpp

   @brief
   Test the range based unique_copy function.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

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

  //
  {
    std::vector< int > x = { 1, 2, 3, 4, 5 };
    std::vector< int > y;
    auto it = range::unique_copy( x, std::back_inserter( y ));
    COMBINE_TEST_EQUAL( x.size(), y.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( y )));
    int j = 1;
    for( auto jt = begin( y ); jt != end( y ); ++jt, ++j )
    {
      COMBINE_TEST_EQUAL( *jt, j );
    }
  }

  //
  {
    std::vector< int > x = { 1, 2, 3, 4, 5 };
    std::vector< int > y;
    auto it = range::unique_copy( x, std::back_inserter( y ), []( auto a, auto b ){ return a == b; });
    COMBINE_TEST_EQUAL( x.size(), y.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( y )));
    int j = 1;
    for( auto jt = begin( y ); jt != end( y ); ++jt, ++j )
    {
      COMBINE_TEST_EQUAL( *jt, j );
    }
  }

  //
  {
    std::vector< int > x = { 1, 2, 2, 3, 4, 5 };
    std::vector< int > y;
    auto it = range::unique_copy( x, std::back_inserter( y ));
    COMBINE_TEST_EQUAL( x.size()-1, y.size());
    int j = 1;
    for( auto jt = begin( y ); jt != end( y ); ++jt, ++j )
    {
      COMBINE_TEST_EQUAL( *jt, j );
    }
  }


    //
  {
    std::vector< int > x = { 1, 2, 2, 3, 4, 5 };
    std::vector< int > y;
    auto it = range::unique_copy( x, std::back_inserter( y ), []( auto a, auto b ){ return a == b; });
    COMBINE_TEST_EQUAL( x.size()-1, y.size());
    int j = 1;
    for( auto jt = begin( y ); jt != end( y ); ++jt, ++j )
    {
      COMBINE_TEST_EQUAL( *jt, j );
    }
  }


  
  return 0;
}


