#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Vehicle(py::object m)
{
    py::class_< UCustomizationUsage_Vehicle,  UCustomizationUsage   >(m, "UCustomizationUsage_Vehicle")
        .def("StaticClass", &UCustomizationUsage_Vehicle::StaticClass, py::return_value_policy::reference)
          ;
}