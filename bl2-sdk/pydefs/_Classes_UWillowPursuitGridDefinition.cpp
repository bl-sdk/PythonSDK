#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPursuitGridDefinition()
{
    py::class_< UWillowPursuitGridDefinition,  UGBXDefinition   >("UWillowPursuitGridDefinition")
        .def_readwrite("PursuitNodes", &UWillowPursuitGridDefinition::PursuitNodes)
        .def_readwrite("GridName", &UWillowPursuitGridDefinition::GridName)
        .def("StaticClass", &UWillowPursuitGridDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}