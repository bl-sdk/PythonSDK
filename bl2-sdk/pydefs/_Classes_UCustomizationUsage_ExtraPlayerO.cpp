#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerO()
{
    py::class_< UCustomizationUsage_ExtraPlayerO,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerO")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerO::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}