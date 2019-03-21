#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSet_Mirror()
{
    class_< FSet_Mirror >("FSet_Mirror", no_init)
        .def_readwrite("Elements", &FSet_Mirror::Elements)
        .def_readwrite("InlineHash", &FSet_Mirror::InlineHash)
        .def_readwrite("Hash", &FSet_Mirror::Hash)
        .def_readwrite("HashSize", &FSet_Mirror::HashSize)
  ;
}