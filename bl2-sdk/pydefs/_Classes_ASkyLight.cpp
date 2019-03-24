#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkyLight(py::module &m)
{
    py::class_< ASkyLight,  ALight   >(m, "ASkyLight")
		.def_static("StaticClass", &ASkyLight::StaticClass, py::return_value_policy::reference)
          ;
}