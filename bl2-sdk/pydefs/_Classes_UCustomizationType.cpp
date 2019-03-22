#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationType(py::module &m)
{
    py::class_< UCustomizationType,  UGBXDefinition   >(m, "UCustomizationType")
        .def_readwrite("CustomizationTypeName", &UCustomizationType::CustomizationTypeName)
        .def_readwrite("PRICustomizationIndex", &UCustomizationType::PRICustomizationIndex)
        .def_readwrite("AssociatedCustomizationDataClass", &UCustomizationType::AssociatedCustomizationDataClass)
          ;
}