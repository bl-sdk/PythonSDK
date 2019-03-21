#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimSwapData()
{
    class_< FAnimSwapData >("FAnimSwapData", no_init)
        .def_readwrite("Index1", &FAnimSwapData::Index1)
        .def_readwrite("Index2", &FAnimSwapData::Index2)
  ;
}