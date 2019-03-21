#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlaceableDynamicSMActor()
{
    py::class_< APlaceableDynamicSMActor,  ADynamicSMActor   >("APlaceableDynamicSMActor")
        .def("StaticClass", &APlaceableDynamicSMActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}