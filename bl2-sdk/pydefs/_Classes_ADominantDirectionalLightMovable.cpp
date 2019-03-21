#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLightMovable(py::object m)
{
    py::class_< ADominantDirectionalLightMovable,  ADominantDirectionalLight   >(m, "ADominantDirectionalLightMovable")
        .def("StaticClass", &ADominantDirectionalLightMovable::StaticClass, py::return_value_policy::reference)
          ;
}