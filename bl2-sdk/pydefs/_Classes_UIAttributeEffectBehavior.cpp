#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttributeEffectBehavior(py::module &m)
{
    py::class_< UIAttributeEffectBehavior,  UInterface   >(m, "UIAttributeEffectBehavior")
          ;
}