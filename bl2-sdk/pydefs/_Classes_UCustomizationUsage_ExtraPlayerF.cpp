#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerF(py::object m)
{
    py::class_< UCustomizationUsage_ExtraPlayerF,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerF")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerF::StaticClass, py::return_value_policy::reference)
          ;
}