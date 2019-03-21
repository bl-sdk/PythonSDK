#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelStreamingData()
{
    class_< FLevelStreamingData >("FLevelStreamingData", no_init)
        .def_readwrite("Level", &FLevelStreamingData::Level)
  ;
}