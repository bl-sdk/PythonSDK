#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAppliedSkillEffect(py::object m)
{
    py::class_< FAppliedSkillEffect >(m, "FAppliedSkillEffect")
        .def_readwrite("EffectData", &FAppliedSkillEffect::EffectData)
        .def_readwrite("Contexts", &FAppliedSkillEffect::Contexts)
        .def_readwrite("Modifier", &FAppliedSkillEffect::Modifier)
  ;
}