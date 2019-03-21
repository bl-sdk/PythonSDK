#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumRuleAnnounce()
{
    py::class_< UWillowSeqAct_ColiseumRuleAnnounce,  USequenceAction   >("UWillowSeqAct_ColiseumRuleAnnounce")
        .def("StaticClass", &UWillowSeqAct_ColiseumRuleAnnounce::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumRuleAnnounce::eventActivated)
        .staticmethod("StaticClass")
  ;
}