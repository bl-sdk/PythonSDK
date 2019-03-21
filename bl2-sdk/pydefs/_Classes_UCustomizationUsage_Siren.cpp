#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Siren()
{
    py::class_< UCustomizationUsage_Siren,  UCustomizationUsage_Player   >("UCustomizationUsage_Siren")
        .def("StaticClass", &UCustomizationUsage_Siren::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}