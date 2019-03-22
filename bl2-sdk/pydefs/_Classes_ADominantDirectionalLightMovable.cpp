#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLightMovable(py::module &m)
{
    py::class_< ADominantDirectionalLightMovable,  ADominantDirectionalLight   >(m, "ADominantDirectionalLightMovable")
          ;
}