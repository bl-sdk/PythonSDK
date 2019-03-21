#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_UpdateColiseumRuleOverlay()
{
    py::class_< UWillowSeqAct_UpdateColiseumRuleOverlay,  USequenceAction   >("UWillowSeqAct_UpdateColiseumRuleOverlay")
        .def_readwrite("RuleInfo", &UWillowSeqAct_UpdateColiseumRuleOverlay::RuleInfo)
        .def_readwrite("UpdateMode", &UWillowSeqAct_UpdateColiseumRuleOverlay::UpdateMode)
        .def("StaticClass", &UWillowSeqAct_UpdateColiseumRuleOverlay::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_UpdateColiseumRuleOverlay::eventActivated)
        .staticmethod("StaticClass")
  ;
}