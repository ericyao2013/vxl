// #include <vcl_compiler.h> // not necessary since the current file should only be included through ../vcl_set.txx
#include "vcl_set.h"
#include "vcl_multiset.h"
#include "vcl_rbtree.txx"

#undef VCL_SET_INSTANTIATE
#define VCL_SET_INSTANTIATE(T, Comp)                               \
template class vcl_set<T, Comp VCL_DFL_TMPL_ARG(vcl_alloc) >;      \
template class vcl_multiset<T, Comp VCL_DFL_TMPL_ARG(vcl_alloc) >; \
VCL_RBTREE_INSTANTIATE(T, T, vcl_identity<T >, vcl_less<T >);      \
VCL_RBTREE_VALUE_INSTANTIATE(T); 

