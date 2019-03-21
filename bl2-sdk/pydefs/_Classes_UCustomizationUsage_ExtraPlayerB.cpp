#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerB()
{
    py::class_< UCustomizationUsage_ExtraPlayerB,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerB")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerB::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}