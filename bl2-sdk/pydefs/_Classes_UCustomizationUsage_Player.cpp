#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Player(py::module &m)
{
    py::class_< UCustomizationUsage_Player,  UGBXDefinition   >(m, "UCustomizationUsage_Player")
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
          ;
}