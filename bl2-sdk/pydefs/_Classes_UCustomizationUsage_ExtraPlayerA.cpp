#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerA()
{
    py::class_< UCustomizationUsage_ExtraPlayerA,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerA")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerA::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}