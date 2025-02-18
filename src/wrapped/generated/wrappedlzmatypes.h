/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedlzmaTYPES_H_
#define __wrappedlzmaTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);
typedef int64_t (*iFpppppL_t)(void*, void*, void*, void*, void*, uintptr_t);
typedef int64_t (*iFpupppLppL_t)(void*, uint64_t, void*, void*, void*, uintptr_t, void*, void*, uintptr_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(lzma_index_end, vFpp_t) \
	GO(lzma_index_buffer_decode, iFpppppL_t) \
	GO(lzma_stream_buffer_decode, iFpupppLppL_t)

#endif // __wrappedlzmaTYPES_H_
