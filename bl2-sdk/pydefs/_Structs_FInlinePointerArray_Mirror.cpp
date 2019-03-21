#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInlinePointerArray_Mirror()
{
    class_< FInlinePointerArray_Mirror >("FInlinePointerArray_Mirror", no_init)
        .def_readwrite("InlineData", &FInlinePointerArray_Mirror::InlineData)
        .def_readwrite("SecondaryData", &FInlinePointerArray_Mirror::SecondaryData)
  ;
}