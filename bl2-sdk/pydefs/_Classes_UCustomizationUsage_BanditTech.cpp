#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_BanditTech()
{
    py::class_< UCustomizationUsage_BanditTech,  UCustomizationUsage_Vehicle   >("UCustomizationUsage_BanditTech")
        .def("StaticClass", &UCustomizationUsage_BanditTech::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}