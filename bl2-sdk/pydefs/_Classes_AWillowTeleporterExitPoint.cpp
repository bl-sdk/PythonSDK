#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTeleporterExitPoint()
{
    py::class_< AWillowTeleporterExitPoint,  AActor   >("AWillowTeleporterExitPoint")
        .def_readwrite("CylinderComponent", &AWillowTeleporterExitPoint::CylinderComponent)
        .def("StaticClass", &AWillowTeleporterExitPoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}