#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerE()
{
    py::class_< UCustomizationUsage_ExtraPlayerE,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerE")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerE::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}