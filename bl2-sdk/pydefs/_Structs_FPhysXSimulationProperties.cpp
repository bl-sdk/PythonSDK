#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysXSimulationProperties()
{
    py::class_< FPhysXSimulationProperties >("FPhysXSimulationProperties")
        .def_readwrite("TimeStep", &FPhysXSimulationProperties::TimeStep)
        .def_readwrite("MaxSubSteps", &FPhysXSimulationProperties::MaxSubSteps)
  ;
}