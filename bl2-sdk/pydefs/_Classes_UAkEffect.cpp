#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkEffect()
{
    py::class_< UAkEffect,  UAkObject   >("UAkEffect")
        .def_readwrite("EffectName", &UAkEffect::EffectName)
        .def("StaticClass", &UAkEffect::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}