#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FObjectiveUpdateData()
{
    class_< FObjectiveUpdateData >("FObjectiveUpdateData", no_init)
        .def_readwrite("Objective", &FObjectiveUpdateData::Objective)
        .def_readwrite("ObjectiveBit", &FObjectiveUpdateData::ObjectiveBit)
  ;
}