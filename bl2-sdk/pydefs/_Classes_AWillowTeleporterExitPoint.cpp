#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTeleporterExitPoint(py::module &m)
{
    py::class_< AWillowTeleporterExitPoint,  AActor   >(m, "AWillowTeleporterExitPoint")
        .def_readwrite("CylinderComponent", &AWillowTeleporterExitPoint::CylinderComponent)
          ;
}