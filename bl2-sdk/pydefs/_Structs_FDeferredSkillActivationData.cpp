#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeferredSkillActivationData()
{
    class_< FDeferredSkillActivationData >("FDeferredSkillActivationData", no_init)
        .def_readwrite("SkillInstigator", &FDeferredSkillActivationData::SkillInstigator)
        .def_readwrite("Definition", &FDeferredSkillActivationData::Definition)
        .def_readwrite("AdditionalSkillTarget", &FDeferredSkillActivationData::AdditionalSkillTarget)
        .def_readwrite("SkillGrade", &FDeferredSkillActivationData::SkillGrade)
        .def_readwrite("StateChangeDelegate", &FDeferredSkillActivationData::StateChangeDelegate)
  ;
}