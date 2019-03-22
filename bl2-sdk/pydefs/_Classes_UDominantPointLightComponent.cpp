#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDominantPointLightComponent(py::module &m)
{
    py::class_< UDominantPointLightComponent,  UPointLightComponent   >(m, "UDominantPointLightComponent")
          ;
}