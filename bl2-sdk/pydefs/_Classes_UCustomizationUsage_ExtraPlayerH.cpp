#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerH()
{
    py::class_< UCustomizationUsage_ExtraPlayerH,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerH")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerH::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}