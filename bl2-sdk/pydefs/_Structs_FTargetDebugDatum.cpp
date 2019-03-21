#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTargetDebugDatum()
{
    class_< FTargetDebugDatum >("FTargetDebugDatum", no_init)
        .def_readwrite("TargetName", &FTargetDebugDatum::TargetName)
        .def_readwrite("TotalPriority", &FTargetDebugDatum::TotalPriority)
        .def_readwrite("PriorityData", &FTargetDebugDatum::PriorityData)
  ;
}