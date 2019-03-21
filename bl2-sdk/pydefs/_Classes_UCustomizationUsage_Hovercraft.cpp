#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Hovercraft()
{
    py::class_< UCustomizationUsage_Hovercraft,  UCustomizationUsage_Vehicle   >("UCustomizationUsage_Hovercraft")
        .def("StaticClass", &UCustomizationUsage_Hovercraft::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}