#ifndef vcl_gcc_295_set_txx_
#define vcl_gcc_295_set_txx_

#include <vcl_set.h>

#define VCL_SET_INSTANTIATE_ITERATOR(InputIterator, Distance)\
template void distance (InputIterator , InputIterator , Distance& ) 

#define VCL_SET_INSTANTIATE(T, Comp)\
template class vcl_set<T, Comp >; \
VCL_SET_INSTANTIATE_ITERATOR(vcl_set<T VCL_COMMA Comp >::iterator, unsigned); \
template pair<_Rb_tree<T, T, _Identity<T >, Comp, allocator<T > >::iterator,bool> \
                _Rb_tree<T, T, _Identity<T >, Comp, allocator<T > >::insert_unique(T const&); \
template _Rb_tree<T, T, _Identity<T >, Comp, allocator<T > >::const_iterator \
                _Rb_tree<T, T, _Identity<T >, Comp, allocator<T > >::find(T const&) const; \
template void   _Rb_tree<T, T, _Identity<T >, Comp, allocator<T > >::_M_erase(_Rb_tree_node*); \
template size_t _Rb_tree<T, T, _Identity<T >, Comp, allocator<T > >::erase(T const&)

#endif
