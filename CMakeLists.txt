cmake_minimum_required( VERSION 2.8.4 )

project( RANGE )

set( CMAKE_CXX_FLAGS "-std=c++14" )
set( COMBINE_INCLUDE_DIR "/usr/local/include" )

set( CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake
  ${COMBINE_INCLUDE_DIR}/combine/cmake
  ${CMAKE_MODULE_PATH} )

option( BUILD_TESTS "Build the tests?" ON )


include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
  ${COMBINE_INCLUDE_DIR} )

include( range_version )

set( range_version 
  ${range_major_version}.${range_minor_version}.${range_build_version} )

if( NOT RANGE_INSTALL_INCLUDE_DIR )
  set( RANGE_INSTAL_INCLUDE_DIR include/range-${RANGE_MAJOR_VERSION}.${RANGE_MINOR_VERSION}/range )
endif()

install( FILES
  range/range.hpp
  range/import.hpp
  range/wrap.hpp
  range/core.hpp
  DESTINATION ${RANGE_INSTAL_INCLUDE_DIR})

if( BUILD_TESTS )
  
  enable_testing()
  include( simple_test )
  
  add_simplest_test( all_of )
  add_simplest_test( any_of )
  add_simplest_test( none_of )
  add_simplest_test( for_each )
  add_simplest_test( find )
  add_simplest_test( find_if )
  add_simplest_test( find_if_not )
  add_simplest_test( find_end )
  add_simplest_test( find_first_of )
  add_simplest_test( adjacent_find )
  add_simplest_test( count )
  add_simplest_test( count_if )
  add_simplest_test( mismatch )
  add_simplest_test( equal )
  add_simplest_test( is_permutation )
  add_simplest_test( search )
  add_simplest_test( search_n )
  add_simplest_test( copy )
  add_simplest_test( copy_if )
  add_simplest_test( copy_backward )
  add_simplest_test( move )
  add_simplest_test( move_backward )
  add_simplest_test( swap_ranges )
  add_simplest_test( transform )
  add_simplest_test( transform2 )
  add_simplest_test( replace )
  add_simplest_test( replace_if )
  add_simplest_test( replace_copy )
  add_simplest_test( replace_copy_if )
  add_simplest_test( fill )
  add_simplest_test( generate )
  add_simplest_test( remove )
  add_simplest_test( remove_if )
  add_simplest_test( remove_copy )
  add_simplest_test( remove_copy_if )
  add_simplest_test( unique )
  add_simplest_test( unique_copy )
  add_simplest_test( reverse )
  add_simplest_test( reverse_copy )
  add_simplest_test( rotate )
  add_simplest_test( rotate_copy )
  add_simplest_test( random_shuffle )
  add_simplest_test( shuffle )
  add_simplest_test( is_partitioned )
  add_simplest_test( partition )
  add_simplest_test( stable_partition )
  add_simplest_test( partition_copy )
  add_simplest_test( partition_point )
  add_simplest_test( sort )
  add_simplest_test( stable_sort )
  add_simplest_test( partial_sort )
  add_simplest_test( partial_sort_copy )
  add_simplest_test( is_sorted )
  add_simplest_test( is_sorted_until )
  add_simplest_test( nth_element )
  add_simplest_test( lower_bound )
  add_simplest_test( upper_bound )
  add_simplest_test( equal_range )
  add_simplest_test( binary_search )
  add_simplest_test( merge )
  add_simplest_test( inplace_merge )
  add_simplest_test( includes )
  add_simplest_test( set_union )
  add_simplest_test( set_intersection )
  add_simplest_test( set_difference )
  add_simplest_test( set_symmetric_difference )
  add_simplest_test( push_heap )
  add_simplest_test( pop_heap )
  add_simplest_test( make_heap )
  add_simplest_test( sort_heap )
  add_simplest_test( is_heap_until )
  add_simplest_test( min_element )
  add_simplest_test( max_element )
  add_simplest_test( minmax_element )
  add_simplest_test( lexicographical_compare )
  add_simplest_test( next_permutation )
  add_simplest_test( prev_permutation )
  
endif()
