#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerJ(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerJ,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerJ")
          ;
}