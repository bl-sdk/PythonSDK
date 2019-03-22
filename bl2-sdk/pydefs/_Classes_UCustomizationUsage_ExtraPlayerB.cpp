#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerB(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerB,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerB")
          ;
}