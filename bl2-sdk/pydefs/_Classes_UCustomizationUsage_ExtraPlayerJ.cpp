#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerJ()
{
    py::class_< UCustomizationUsage_ExtraPlayerJ,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerJ")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerJ::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}