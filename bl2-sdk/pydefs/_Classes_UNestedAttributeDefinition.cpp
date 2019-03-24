#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNestedAttributeDefinition(py::module &m)
{
    py::class_< UNestedAttributeDefinition,  UAttributeDefinition   >(m, "UNestedAttributeDefinition")
		.def_static("StaticClass", &UNestedAttributeDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OuterContextAttributeDefinition", &UNestedAttributeDefinition::OuterContextAttributeDefinition)
        .def_readwrite("InnerContextAttributeDefinition", &UNestedAttributeDefinition::InnerContextAttributeDefinition)
          ;
}