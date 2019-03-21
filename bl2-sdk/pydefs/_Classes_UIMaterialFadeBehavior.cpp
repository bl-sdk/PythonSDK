#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMaterialFadeBehavior()
{
    py::class_< UIMaterialFadeBehavior,  UInterface   >("UIMaterialFadeBehavior")
        .def("StaticClass", &UIMaterialFadeBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_UseMaterialScalarFadeForGoreDeath", &UIMaterialFadeBehavior::Behavior_UseMaterialScalarFadeForGoreDeath)
        .def("Behavior_MaterialScalarFade", &UIMaterialFadeBehavior::Behavior_MaterialScalarFade)
        .staticmethod("StaticClass")
  ;
}