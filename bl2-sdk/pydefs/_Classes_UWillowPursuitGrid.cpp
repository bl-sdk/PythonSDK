#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPursuitGrid()
{
    py::class_< UWillowPursuitGrid,  UObject   >("UWillowPursuitGrid")
        .def_readwrite("PursuitNodes", &UWillowPursuitGrid::PursuitNodes)
        .def_readwrite("GridName", &UWillowPursuitGrid::GridName)
        .def("StaticClass", &UWillowPursuitGrid::StaticClass, py::return_value_policy::reference)
        .def("InitializeFromDefinition", &UWillowPursuitGrid::InitializeFromDefinition)
        .staticmethod("StaticClass")
  ;
}