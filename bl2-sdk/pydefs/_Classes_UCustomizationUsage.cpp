#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage()
{
    py::class_< UCustomizationUsage,  UGBXDefinition   >("UCustomizationUsage")
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
        .def("StaticClass", &UCustomizationUsage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}