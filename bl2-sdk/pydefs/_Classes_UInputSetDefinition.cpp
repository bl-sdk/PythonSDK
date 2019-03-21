#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputSetDefinition()
{
    py::class_< UInputSetDefinition,  UGBXDefinition   >("UInputSetDefinition")
        .def_readwrite("InputActions", &UInputSetDefinition::InputActions)
        .def("StaticClass", &UInputSetDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}