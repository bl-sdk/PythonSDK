#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_FanBoat()
{
    py::class_< UCustomizationUsage_FanBoat,  UCustomizationUsage   >("UCustomizationUsage_FanBoat")
        .def("StaticClass", &UCustomizationUsage_FanBoat::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}