#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkyLightToggleable(py::module &m)
{
    py::class_< ASkyLightToggleable,  ALight   >(m, "ASkyLightToggleable")
		.def_static("StaticClass", &ASkyLightToggleable::StaticClass, py::return_value_policy::reference)
          ;
}