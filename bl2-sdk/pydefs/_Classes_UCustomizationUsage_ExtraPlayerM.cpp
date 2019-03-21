#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerM()
{
    py::class_< UCustomizationUsage_ExtraPlayerM,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerM")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerM::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}