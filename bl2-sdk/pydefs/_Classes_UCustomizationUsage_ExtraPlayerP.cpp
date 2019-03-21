#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerP()
{
    py::class_< UCustomizationUsage_ExtraPlayerP,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerP")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerP::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}