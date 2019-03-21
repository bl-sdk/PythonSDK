#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FObjectiveDependencyData()
{
    class_< FObjectiveDependencyData >("FObjectiveDependencyData", no_init)
        .def_readwrite("Objective", &FObjectiveDependencyData::Objective)
        .def_readwrite("Status", &FObjectiveDependencyData::Status)
  ;
}