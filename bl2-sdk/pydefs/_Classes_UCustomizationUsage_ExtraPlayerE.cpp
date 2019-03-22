#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerE(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerE,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerE")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerE::StaticClass, py::return_value_policy::reference)
          ;
}