#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantSpotLight(py::module &m)
{
    py::class_< ADominantSpotLight,  ASpotLight   >(m, "ADominantSpotLight")
          ;
}