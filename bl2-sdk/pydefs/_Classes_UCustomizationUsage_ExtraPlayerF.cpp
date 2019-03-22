#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerF(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerF,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerF")
          ;
}