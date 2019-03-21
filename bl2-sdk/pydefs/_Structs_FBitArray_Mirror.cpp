#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBitArray_Mirror()
{
    class_< FBitArray_Mirror >("FBitArray_Mirror", no_init)
        .def_readwrite("IndirectData", &FBitArray_Mirror::IndirectData)
        .def_readonly("InlineData", &FBitArray_Mirror::InlineData)
        .def_readwrite("NumBits", &FBitArray_Mirror::NumBits)
        .def_readwrite("MaxBits", &FBitArray_Mirror::MaxBits)
  ;
}