#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlaceableDynamicSMActor(py::object m)
{
    py::class_< APlaceableDynamicSMActor,  ADynamicSMActor   >(m, "APlaceableDynamicSMActor")
        .def("StaticClass", &APlaceableDynamicSMActor::StaticClass, py::return_value_policy::reference)
          ;
}