#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPursuitGrid(py::module &m)
{
    py::class_< UWillowPursuitGrid,  UObject   >(m, "UWillowPursuitGrid")
		.def_static("StaticClass", &UWillowPursuitGrid::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PursuitNodes", &UWillowPursuitGrid::PursuitNodes)
        .def_readwrite("GridName", &UWillowPursuitGrid::GridName)
        .def("InitializeFromDefinition", &UWillowPursuitGrid::InitializeFromDefinition)
          ;
}