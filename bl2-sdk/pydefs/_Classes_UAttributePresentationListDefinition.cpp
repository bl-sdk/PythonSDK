#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributePresentationListDefinition(py::module &m)
{
    py::class_< UAttributePresentationListDefinition,  UGBXDefinition   >(m, "UAttributePresentationListDefinition")
        .def_readwrite("Attributes", &UAttributePresentationListDefinition::Attributes)
        .def("FindAttributePresentation", &UAttributePresentationListDefinition::FindAttributePresentation, py::return_value_policy::reference)
          ;
}