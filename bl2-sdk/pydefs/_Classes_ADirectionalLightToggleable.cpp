#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADirectionalLightToggleable(py::module &m)
{
    py::class_< ADirectionalLightToggleable,  ADirectionalLight   >(m, "ADirectionalLightToggleable")
        .def("StaticClass", &ADirectionalLightToggleable::StaticClass, py::return_value_policy::reference)
          ;
}