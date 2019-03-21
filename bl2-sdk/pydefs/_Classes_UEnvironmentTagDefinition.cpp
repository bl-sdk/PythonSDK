#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEnvironmentTagDefinition()
{
    py::class_< UEnvironmentTagDefinition,  UGBXDefinition   >("UEnvironmentTagDefinition")
        .def("StaticClass", &UEnvironmentTagDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}