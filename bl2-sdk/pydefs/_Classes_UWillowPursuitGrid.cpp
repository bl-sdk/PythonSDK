#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPursuitGrid(py::object m)
{
    py::class_< UWillowPursuitGrid,  UObject   >(m, "UWillowPursuitGrid")
        .def_readwrite("PursuitNodes", &UWillowPursuitGrid::PursuitNodes)
        .def_readwrite("GridName", &UWillowPursuitGrid::GridName)
        .def("StaticClass", &UWillowPursuitGrid::StaticClass, py::return_value_policy::reference)
        .def("InitializeFromDefinition", &UWillowPursuitGrid::InitializeFromDefinition)
          ;
}