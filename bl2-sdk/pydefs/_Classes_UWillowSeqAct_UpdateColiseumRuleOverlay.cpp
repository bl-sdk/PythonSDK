#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_UpdateColiseumRuleOverlay(py::module &m)
{
    py::class_< UWillowSeqAct_UpdateColiseumRuleOverlay,  USequenceAction   >(m, "UWillowSeqAct_UpdateColiseumRuleOverlay")
        .def_readwrite("RuleInfo", &UWillowSeqAct_UpdateColiseumRuleOverlay::RuleInfo)
        .def_readwrite("UpdateMode", &UWillowSeqAct_UpdateColiseumRuleOverlay::UpdateMode)
        .def("eventActivated", &UWillowSeqAct_UpdateColiseumRuleOverlay::eventActivated)
          ;
}