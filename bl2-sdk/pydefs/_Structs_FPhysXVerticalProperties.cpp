#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysXVerticalProperties()
{
    py::class_< FPhysXVerticalProperties >("FPhysXVerticalProperties")
        .def_readwrite("Emitters", &FPhysXVerticalProperties::Emitters)
  ;
}