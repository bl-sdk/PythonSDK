#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeferredSkillActivationData()
{
    py::class_< FDeferredSkillActivationData >("FDeferredSkillActivationData")
        .def_readwrite("SkillInstigator", &FDeferredSkillActivationData::SkillInstigator)
        .def_readwrite("Definition", &FDeferredSkillActivationData::Definition)
        .def_readwrite("AdditionalSkillTarget", &FDeferredSkillActivationData::AdditionalSkillTarget)
        .def_readwrite("SkillGrade", &FDeferredSkillActivationData::SkillGrade)
        .def_readwrite("StateChangeDelegate", &FDeferredSkillActivationData::StateChangeDelegate)
  ;
}