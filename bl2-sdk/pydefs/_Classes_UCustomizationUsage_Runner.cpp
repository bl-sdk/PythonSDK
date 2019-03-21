#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Runner(py::object m)
{
    py::class_< UCustomizationUsage_Runner,  UCustomizationUsage_Vehicle   >(m, "UCustomizationUsage_Runner")
        .def("StaticClass", &UCustomizationUsage_Runner::StaticClass, py::return_value_policy::reference)
          ;
}