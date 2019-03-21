#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainDecorationInstance()
{
    py::class_< FTerrainDecorationInstance >("FTerrainDecorationInstance")
        .def_readwrite("Component", &FTerrainDecorationInstance::Component)
        .def_readwrite("X", &FTerrainDecorationInstance::X)
        .def_readwrite("Y", &FTerrainDecorationInstance::Y)
        .def_readwrite("Scale", &FTerrainDecorationInstance::Scale)
        .def_readwrite("Yaw", &FTerrainDecorationInstance::Yaw)
  ;
}