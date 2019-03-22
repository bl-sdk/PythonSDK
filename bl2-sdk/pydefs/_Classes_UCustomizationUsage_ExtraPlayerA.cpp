#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerA(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerA,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerA")
          ;
}