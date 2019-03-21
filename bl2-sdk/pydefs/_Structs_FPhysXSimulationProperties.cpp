#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPhysXSimulationProperties()
{
    class_< FPhysXSimulationProperties >("FPhysXSimulationProperties", no_init)
        .def_readwrite("TimeStep", &FPhysXSimulationProperties::TimeStep)
        .def_readwrite("MaxSubSteps", &FPhysXSimulationProperties::MaxSubSteps)
  ;
}