#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBeamTargetData()
{
    class_< FBeamTargetData >("FBeamTargetData", no_init)
        .def_readwrite("TargetName", &FBeamTargetData::TargetName)
        .def_readwrite("TargetPercentage", &FBeamTargetData::TargetPercentage)
  ;
}