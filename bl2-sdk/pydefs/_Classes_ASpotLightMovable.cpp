#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLightMovable(py::module &m)
{
    py::class_< ASpotLightMovable,  ASpotLight   >(m, "ASpotLightMovable")
          ;
}