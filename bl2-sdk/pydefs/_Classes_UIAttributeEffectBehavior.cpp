#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttributeEffectBehavior()
{
    py::class_< UIAttributeEffectBehavior,  UInterface   >("UIAttributeEffectBehavior")
        .def("StaticClass", &UIAttributeEffectBehavior::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}