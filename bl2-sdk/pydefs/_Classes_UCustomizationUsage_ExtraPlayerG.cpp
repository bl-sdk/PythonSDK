#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerG()
{
    py::class_< UCustomizationUsage_ExtraPlayerG,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerG")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerG::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}