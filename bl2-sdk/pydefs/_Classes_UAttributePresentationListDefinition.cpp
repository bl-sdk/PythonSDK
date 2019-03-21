#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributePresentationListDefinition(py::object m)
{
    py::class_< UAttributePresentationListDefinition,  UGBXDefinition   >(m, "UAttributePresentationListDefinition")
        .def_readwrite("Attributes", &UAttributePresentationListDefinition::Attributes)
        .def("StaticClass", &UAttributePresentationListDefinition::StaticClass, py::return_value_policy::reference)
        .def("FindAttributePresentation", &UAttributePresentationListDefinition::FindAttributePresentation, py::return_value_policy::reference)
          ;
}