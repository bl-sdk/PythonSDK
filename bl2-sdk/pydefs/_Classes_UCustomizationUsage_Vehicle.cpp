#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Vehicle()
{
    py::class_< UCustomizationUsage_Vehicle,  UCustomizationUsage   >("UCustomizationUsage_Vehicle")
        .def("StaticClass", &UCustomizationUsage_Vehicle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}