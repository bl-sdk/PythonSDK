#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADirectionalLight(py::module &m)
{
    py::class_< ADirectionalLight,  ALight   >(m, "ADirectionalLight")
		.def_static("StaticClass", &ADirectionalLight::StaticClass, py::return_value_policy::reference)
          ;
}