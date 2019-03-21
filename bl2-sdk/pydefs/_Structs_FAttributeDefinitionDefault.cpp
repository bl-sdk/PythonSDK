#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeDefinitionDefault(py::object m)
{
    py::class_< FAttributeDefinitionDefault >(m, "FAttributeDefinitionDefault")
        .def_readwrite("Attribute", &FAttributeDefinitionDefault::Attribute)
        .def_readwrite("DefaultValue", &FAttributeDefinitionDefault::DefaultValue)
  ;
}