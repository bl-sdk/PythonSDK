#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Vehicle(py::module &m)
{
    py::class_< UCustomizationUsage_Vehicle,  UCustomizationUsage   >(m, "UCustomizationUsage_Vehicle")
          ;
}