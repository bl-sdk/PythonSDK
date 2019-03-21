#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FArray_Mirror()
{
    class_< FArray_Mirror >("FArray_Mirror", no_init)
        .def_readwrite("Data", &FArray_Mirror::Data)
        .def_readwrite("ArrayNum", &FArray_Mirror::ArrayNum)
        .def_readwrite("ArrayMax", &FArray_Mirror::ArrayMax)
  ;
}