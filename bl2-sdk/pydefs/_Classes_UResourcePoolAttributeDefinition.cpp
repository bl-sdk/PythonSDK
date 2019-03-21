#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolAttributeDefinition(py::object m)
{
    py::class_< UResourcePoolAttributeDefinition,  UAttributeDefinition   >(m, "UResourcePoolAttributeDefinition")
        .def_readwrite("Resource", &UResourcePoolAttributeDefinition::Resource)
        .def("StaticClass", &UResourcePoolAttributeDefinition::StaticClass, py::return_value_policy::reference)
          ;
}