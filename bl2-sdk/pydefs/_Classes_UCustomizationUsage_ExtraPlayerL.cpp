#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerL()
{
    py::class_< UCustomizationUsage_ExtraPlayerL,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerL")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerL::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}