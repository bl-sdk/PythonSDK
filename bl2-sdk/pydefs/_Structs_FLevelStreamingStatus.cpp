#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelStreamingStatus()
{
    class_< FLevelStreamingStatus >("FLevelStreamingStatus", no_init)
        .def_readwrite("PackageName", &FLevelStreamingStatus::PackageName)
  ;
}