#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIHealable(py::module &m)
{
    py::class_< UIHealable,  UInterface   >(m, "UIHealable")
        .def("StaticClass", &UIHealable::StaticClass, py::return_value_policy::reference)
        .def("RemoveAllStatusEffects", &UIHealable::RemoveAllStatusEffects)
        .def("FullyReplenishShields", &UIHealable::FullyReplenishShields)
        .def("FullyReplenishLife", &UIHealable::FullyReplenishLife)
          ;
}