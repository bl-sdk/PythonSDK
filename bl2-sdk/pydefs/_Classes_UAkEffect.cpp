#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkEffect(py::module &m)
{
    py::class_< UAkEffect,  UAkObject   >(m, "UAkEffect")
        .def_readwrite("EffectName", &UAkEffect::EffectName)
          ;
}