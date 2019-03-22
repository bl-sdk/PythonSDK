#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolAttributeDefinition(py::module &m)
{
    py::class_< UResourcePoolAttributeDefinition,  UAttributeDefinition   >(m, "UResourcePoolAttributeDefinition")
        .def_readwrite("Resource", &UResourcePoolAttributeDefinition::Resource)
          ;
}