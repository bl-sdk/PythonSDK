#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_Talk(py::module &m)
{
    py::class_< UWillowDialogAct_Talk,  UGearboxDialogAct_Talk   >(m, "UWillowDialogAct_Talk")
        .def_readwrite("Emote", &UWillowDialogAct_Talk::Emote)
        .def("StaticClass", &UWillowDialogAct_Talk::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UWillowDialogAct_Talk::eventActivate)
        .def("eventTalkFinished", &UWillowDialogAct_Talk::eventTalkFinished)
        .def("eventTalkStarted", &UWillowDialogAct_Talk::eventTalkStarted)
          ;
}