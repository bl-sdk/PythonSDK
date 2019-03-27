#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantPointLight(py::module &m)
{
    py::class_< ADominantPointLight,  APointLight   >(m, "ADominantPointLight")
		.def_static("StaticClass", &ADominantPointLight::StaticClass, py::return_value_policy::reference)
          ;
}