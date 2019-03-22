#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Assassin(py::module &m)
{
    py::class_< UCustomizationUsage_Assassin,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_Assassin")
        .def("StaticClass", &UCustomizationUsage_Assassin::StaticClass, py::return_value_policy::reference)
          ;
}