#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerM(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerM,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerM")
          ;
}