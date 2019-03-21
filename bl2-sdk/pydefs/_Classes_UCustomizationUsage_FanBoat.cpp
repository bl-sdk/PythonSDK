#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_FanBoat(py::object m)
{
    py::class_< UCustomizationUsage_FanBoat,  UCustomizationUsage   >(m, "UCustomizationUsage_FanBoat")
        .def("StaticClass", &UCustomizationUsage_FanBoat::StaticClass, py::return_value_policy::reference)
          ;
}