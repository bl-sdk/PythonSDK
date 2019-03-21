#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerK()
{
    py::class_< UCustomizationUsage_ExtraPlayerK,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerK")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerK::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}