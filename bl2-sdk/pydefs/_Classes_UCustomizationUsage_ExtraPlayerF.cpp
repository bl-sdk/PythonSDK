#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerF()
{
    py::class_< UCustomizationUsage_ExtraPlayerF,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerF")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerF::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}