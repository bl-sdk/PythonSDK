#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAppliedSkillEffect()
{
    class_< FAppliedSkillEffect >("FAppliedSkillEffect", no_init)
        .def_readwrite("EffectData", &FAppliedSkillEffect::EffectData)
        .def_readwrite("Contexts", &FAppliedSkillEffect::Contexts)
        .def_readwrite("Modifier", &FAppliedSkillEffect::Modifier)
  ;
}