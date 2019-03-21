#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNestedAttributeDefinition()
{
    py::class_< UNestedAttributeDefinition,  UAttributeDefinition   >("UNestedAttributeDefinition")
        .def_readwrite("OuterContextAttributeDefinition", &UNestedAttributeDefinition::OuterContextAttributeDefinition)
        .def_readwrite("InnerContextAttributeDefinition", &UNestedAttributeDefinition::InnerContextAttributeDefinition)
        .def("StaticClass", &UNestedAttributeDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}