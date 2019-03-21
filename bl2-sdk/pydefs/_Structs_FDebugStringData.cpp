#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDebugStringData()
{
    class_< FDebugStringData >("FDebugStringData", no_init)
        .def_readwrite("DebugStr", &FDebugStringData::DebugStr)
        .def_readwrite("StrColor", &FDebugStringData::StrColor)
  ;
}