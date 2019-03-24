#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationType(py::module &m)
{
    py::class_< UCustomizationType,  UGBXDefinition   >(m, "UCustomizationType")
		.def_static("StaticClass", &UCustomizationType::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomizationTypeName", &UCustomizationType::CustomizationTypeName)
        .def_readwrite("PRICustomizationIndex", &UCustomizationType::PRICustomizationIndex)
        .def_readwrite("AssociatedCustomizationDataClass", &UCustomizationType::AssociatedCustomizationDataClass)
          ;
}