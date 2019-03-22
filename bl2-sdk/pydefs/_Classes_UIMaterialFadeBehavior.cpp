#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMaterialFadeBehavior(py::module &m)
{
    py::class_< UIMaterialFadeBehavior,  UInterface   >(m, "UIMaterialFadeBehavior")
        .def("Behavior_UseMaterialScalarFadeForGoreDeath", &UIMaterialFadeBehavior::Behavior_UseMaterialScalarFadeForGoreDeath)
        .def("Behavior_MaterialScalarFade", &UIMaterialFadeBehavior::Behavior_MaterialScalarFade)
          ;
}