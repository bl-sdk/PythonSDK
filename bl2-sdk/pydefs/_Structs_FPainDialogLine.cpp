#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPainDialogLine(py::module &m)
{
    py::class_< FPainDialogLine >(m, "FPainDialogLine")
        .def_readwrite("DET_Pain", &FPainDialogLine::DET_Pain)
        .def_readwrite("DamageThresholdPct", &FPainDialogLine::DamageThresholdPct)
        .def_readwrite("ChanceToPlay", &FPainDialogLine::ChanceToPlay)
        .def_readwrite("AkEvent", &FPainDialogLine::AkEvent)
        .def_readwrite("FlinchAnimType", &FPainDialogLine::FlinchAnimType)
        .def_readwrite("FlinchImpulseStrength", &FPainDialogLine::FlinchImpulseStrength)
        .def_readwrite("PainBehaviors", &FPainDialogLine::PainBehaviors)
  ;
}