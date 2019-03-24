#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttributeEffectBehavior(py::module &m)
{
    py::class_< UIAttributeEffectBehavior,  UInterface   >(m, "UIAttributeEffectBehavior")
		.def_static("StaticClass", &UIAttributeEffectBehavior::StaticClass, py::return_value_policy::reference)
          ;
}