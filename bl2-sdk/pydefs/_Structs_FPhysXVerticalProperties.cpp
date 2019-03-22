#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysXVerticalProperties(py::module &m)
{
    py::class_< FPhysXVerticalProperties >(m, "FPhysXVerticalProperties")
        .def_readwrite("Emitters", &FPhysXVerticalProperties::Emitters)
  ;
}