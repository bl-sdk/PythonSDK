#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerI()
{
    py::class_< UCustomizationUsage_ExtraPlayerI,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerI")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerI::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}