#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Soldier()
{
    py::class_< UCustomizationUsage_Soldier,  UCustomizationUsage_Player   >("UCustomizationUsage_Soldier")
        .def("StaticClass", &UCustomizationUsage_Soldier::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}