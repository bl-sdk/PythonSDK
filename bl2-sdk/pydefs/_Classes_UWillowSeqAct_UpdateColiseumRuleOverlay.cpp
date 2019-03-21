#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_UpdateColiseumRuleOverlay()
{
    class_< UWillowSeqAct_UpdateColiseumRuleOverlay, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_UpdateColiseumRuleOverlay", no_init)
        .def_readwrite("RuleInfo", &UWillowSeqAct_UpdateColiseumRuleOverlay::RuleInfo)
        .def_readwrite("UpdateMode", &UWillowSeqAct_UpdateColiseumRuleOverlay::UpdateMode)
        .def("StaticClass", &UWillowSeqAct_UpdateColiseumRuleOverlay::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_UpdateColiseumRuleOverlay::eventActivated)
        .staticmethod("StaticClass")
  ;
}