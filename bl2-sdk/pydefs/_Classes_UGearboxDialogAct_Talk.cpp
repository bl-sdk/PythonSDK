#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Talk(py::object m)
{
    py::class_< UGearboxDialogAct_Talk,  UGearboxDialogNode   >(m, "UGearboxDialogAct_Talk")
        .def_readwrite("OutputDelay", &UGearboxDialogAct_Talk::OutputDelay)
        .def_readwrite("TalkData", &UGearboxDialogAct_Talk::TalkData)
        .def("StaticClass", &UGearboxDialogAct_Talk::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UGearboxDialogAct_Talk::eventActivate)
        .def("eventTalkFinished", &UGearboxDialogAct_Talk::eventTalkFinished)
        .def("eventTalkStarted", &UGearboxDialogAct_Talk::eventTalkStarted)
          ;
}