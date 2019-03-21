#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSubarrayData()
{
    class_< FSubarrayData >("FSubarrayData", no_init)
        .def_readwrite("ArrayIndexAndLength", &FSubarrayData::ArrayIndexAndLength)
  ;
}