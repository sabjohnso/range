/**
   @file
   range.hpp

   @brief
   Main header file for the range algorithm library

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

*/


#ifndef RANGE_HPP_INCLUDED_1970966755413648190
#define RANGE_HPP_INCLUDED_1970966755413648190


#include <range/core.hpp>


namespace range
{


  template< typename ... Xs >
  auto
  all_of( Xs&& ... xs )
  {
    return core::all_of{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  any_of( Xs&& ... xs )
  {
    return core::any_of{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  none_of( Xs&& ... xs )
  {
    return core::none_of{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  for_each( Xs&& ... xs )
  {
    return core::for_each{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  find( Xs&& ... xs )
  {
    return core::find{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  find_if( Xs&& ... xs )
  {
    return core::find_if{}( std::forward< Xs >( xs ) ... );
  }

  
  template< typename ... Xs >
  auto
  find_if_not( Xs&& ... xs )
  {
    return core::find_if_not{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  find_end( Xs&& ... xs )
  {
    return core::find_end{}( std::forward< Xs >( xs ) ... );
  }

  template< typename ... Xs >
  auto
  find_first_of( Xs&& ... xs )
  {
    return core::find_first_of{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  adjacent_find( Xs&& ... xs )
  {
    return core::adjacent_find{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  count( Xs&& ... xs )
  {
    return core::count{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  count_if( Xs&& ... xs )
  {
    return core::count_if{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  mismatch( Xs&& ... xs )
  {
    return core::mismatch{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  equal( Xs&& ... xs )
  {
    return core::equal{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  is_permutation( Xs&& ... xs )
  {
    return core::is_permutation{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  search( Xs&& ... xs )
  {
    return core::search{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  search_n( Xs&& ... xs )
  {
    return core::search_n{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  copy( Xs&& ... xs )
  {
    return core::copy{}( std::forward< Xs >( xs ) ... );
  }
  
  
  template< typename ... Xs >
  auto
  copy_if( Xs&& ... xs )
  {
    return core::copy_if{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  copy_backward( Xs&& ... xs )
  {
    return core::copy_backward{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  move( Xs&& ... xs )
  {
    return core::move{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  move_backward( Xs&& ... xs )
  {
    return core::move_backward{}( std::forward< Xs >( xs ) ... );
  }
  
  
  template< typename ... Xs >
  auto
  swap_ranges( Xs&& ... xs )
  {
    return core::swap_ranges{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  transform( Xs&& ... xs )
  {
    return core::transform{}( std::forward< Xs >( xs ) ... );
  }

  
  template< typename ... Xs >
  auto
  transform2( Xs&& ... xs )
  {
    return core::transform2{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  replace( Xs&& ... xs )
  {
    return core::replace{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  replace_if( Xs&& ... xs )
  {
    return core::replace_if{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  replace_copy( Xs&& ... xs )
  {
    return core::replace_copy{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  replace_copy_if( Xs&& ... xs )
  {
    return core::replace_copy_if{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  fill( Xs&& ... xs )
  {
    return core::fill{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  generate( Xs&& ... xs )
  {
    return core::generate{}( std::forward< Xs >( xs ) ... );
  }
  
  
  template< typename ... Xs >
  auto
  remove( Xs&& ... xs )
  {
    return core::remove{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  remove_if( Xs&& ... xs )
  {
    return core::remove_if{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  remove_copy( Xs&& ... xs )
  {
    return core::remove_copy{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  remove_copy_if( Xs&& ... xs )
  {
    return core::remove_copy_if{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  unique( Xs&& ... xs )
  {
    return core::unique{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  unique_copy( Xs&& ... xs )
  {
    return core::unique_copy{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  reverse( Xs&& ... xs )
  {
    return core::reverse{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  reverse_copy( Xs&& ... xs )
  {
    return core::reverse_copy{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  rotate( Xs&& ... xs )
  {
    return core::rotate{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  rotate_copy( Xs&& ... xs )
  {
    return core::rotate_copy{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  random_shuffle( Xs&& ... xs )
  {
    return core::random_shuffle{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  shuffle( Xs&& ... xs )
  {
    return core::shuffle{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  is_partitioned( Xs&& ... xs )
  {
    return core::is_partitioned{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  partition( Xs&& ... xs )
  {
    return core::partition{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  stable_partition( Xs&& ... xs )
  {
    return core::stable_partition{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  partition_copy( Xs&& ... xs )
  {
    return core::partition_copy{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  partition_point( Xs&& ... xs )
  {
    return core::partition_point{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  sort( Xs&& ... xs )
  {
    return core::sort{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  stable_sort( Xs&& ... xs )
  {
    return core::stable_sort{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  partial_sort( Xs&& ... xs )
  {
    return core::partial_sort{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  partial_sort_copy( Xs&& ... xs )
  {
    return core::partial_sort_copy{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  is_sorted( Xs&& ... xs )
  {
    return core::is_sorted{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  is_sorted_until( Xs&& ... xs )
  {
    return core::is_sorted_until{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  nth_element( Xs&& ... xs )
  {
    return core::nth_element{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  lower_bound( Xs&& ... xs )
  {
    return core::lower_bound{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  upper_bound( Xs&& ... xs )
  {
    return core::upper_bound{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  equal_range( Xs&& ... xs )
  {
    return core::equal_range{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  binary_search( Xs&& ... xs )
  {
    return core::binary_search{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  merge( Xs&& ... xs )
  {
    return core::merge{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  inplace_merge( Xs&& ... xs )
  {
    return core::inplace_merge{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  includes( Xs&& ... xs )
  {
    return core::includes{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  set_union( Xs&& ... xs )
  {
    return core::set_union{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  set_intersection( Xs&& ... xs )
  {
    return core::set_intersection{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  set_difference( Xs&& ... xs )
  {
    return core::set_difference{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  set_symmetric_difference( Xs&& ... xs )
  {
    return core::set_symmetric_difference{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  push_heap( Xs&& ... xs )
  {
    return core::push_heap{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  pop_heap( Xs&& ... xs )
  {
    return core::pop_heap{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  make_heap( Xs&& ... xs )
  {
    return core::make_heap{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  sort_heap( Xs&& ... xs )
  {
    return core::sort_heap{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  is_heap( Xs&& ... xs )
  {
    return core::is_heap{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  is_heap_until( Xs&& ... xs )
  {
    return core::is_heap_until{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  min_element( Xs&& ... xs )
  {
    return core::min_element{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  max_element( Xs&& ... xs )
  {
    return core::max_element{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  minmax_element( Xs&& ... xs )
  {
    return core::minmax_element{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  lexicographical_compare( Xs&& ... xs )
  {
    return core::lexicographical_compare{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  next_permutation( Xs&& ... xs )
  {
    return core::next_permutation{}( std::forward< Xs >( xs ) ... );
  }
  
  template< typename ... Xs >
  auto
  prev_permutation( Xs&& ... xs )
  {
    return core::prev_permutation{}( std::forward< Xs >( xs ) ... );
  }

  
} // end of namespace range


#endif // RANGE_HPP_INCLUDED_1970966755413648190
