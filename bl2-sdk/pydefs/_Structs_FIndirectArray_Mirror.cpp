#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIndirectArray_Mirror()
{
    class_< FIndirectArray_Mirror >("FIndirectArray_Mirror", no_init)
        .def_readwrite("Data", &FIndirectArray_Mirror::Data)
        .def_readwrite("ArrayNum", &FIndirectArray_Mirror::ArrayNum)
        .def_readwrite("ArrayMax", &FIndirectArray_Mirror::ArrayMax)
  ;
}