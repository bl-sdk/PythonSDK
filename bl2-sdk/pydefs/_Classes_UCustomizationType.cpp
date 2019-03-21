#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationType()
{
    py::class_< UCustomizationType,  UGBXDefinition   >("UCustomizationType")
        .def_readwrite("CustomizationTypeName", &UCustomizationType::CustomizationTypeName)
        .def_readwrite("PRICustomizationIndex", &UCustomizationType::PRICustomizationIndex)
        .def_readwrite("AssociatedCustomizationDataClass", &UCustomizationType::AssociatedCustomizationDataClass)
        .def("StaticClass", &UCustomizationType::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}