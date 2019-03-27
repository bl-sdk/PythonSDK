#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLightMovable(py::module &m)
{
    py::class_< ASpotLightMovable,  ASpotLight   >(m, "ASpotLightMovable")
		.def_static("StaticClass", &ASpotLightMovable::StaticClass, py::return_value_policy::reference)
          ;
}