#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDebugEntryData()
{
    class_< FDebugEntryData >("FDebugEntryData", no_init)
        .def_readwrite("DebugStrs", &FDebugEntryData::DebugStrs)
  ;
}