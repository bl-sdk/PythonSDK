#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLight(py::object m)
{
    py::class_< ADominantDirectionalLight,  ALight   >(m, "ADominantDirectionalLight")
        .def("StaticClass", &ADominantDirectionalLight::StaticClass, py::return_value_policy::reference)
          ;
}