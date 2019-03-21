#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolAttributeDefinition()
{
    py::class_< UResourcePoolAttributeDefinition,  UAttributeDefinition   >("UResourcePoolAttributeDefinition")
        .def_readwrite("Resource", &UResourcePoolAttributeDefinition::Resource)
        .def("StaticClass", &UResourcePoolAttributeDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}