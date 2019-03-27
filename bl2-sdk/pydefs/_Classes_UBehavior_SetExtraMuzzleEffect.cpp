#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetExtraMuzzleEffect(py::module &m)
{
    py::class_< UBehavior_SetExtraMuzzleEffect,  UBehaviorBase   >(m, "UBehavior_SetExtraMuzzleEffect")
		.def_static("StaticClass", &UBehavior_SetExtraMuzzleEffect::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BulletFromClip", &UBehavior_SetExtraMuzzleEffect::BulletFromClip)
        .def_readwrite("Effect", &UBehavior_SetExtraMuzzleEffect::Effect)
        .def("ApplyBehaviorToContext", &UBehavior_SetExtraMuzzleEffect::ApplyBehaviorToContext)
          ;
}