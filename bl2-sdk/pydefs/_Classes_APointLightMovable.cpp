#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APointLightMovable(py::module &m)
{
    py::class_< APointLightMovable,  APointLight   >(m, "APointLightMovable")
		.def_static("StaticClass", &APointLightMovable::StaticClass, py::return_value_policy::reference)
          ;
}