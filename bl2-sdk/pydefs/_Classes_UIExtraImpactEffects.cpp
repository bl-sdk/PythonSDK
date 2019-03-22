#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIExtraImpactEffects(py::module &m)
{
    py::class_< UIExtraImpactEffects,  UInterface   >(m, "UIExtraImpactEffects")
        .def("PlayExtraImpactEffects", &UIExtraImpactEffects::PlayExtraImpactEffects)
        .def("SetExtraImpactEffect", &UIExtraImpactEffects::SetExtraImpactEffect)
          ;
}