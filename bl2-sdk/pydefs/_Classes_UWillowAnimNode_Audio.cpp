#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Audio(py::object m)
{
    py::class_< UWillowAnimNode_Audio,  UAnimNodeBlendBase   >(m, "UWillowAnimNode_Audio")
        .def_readwrite("StartAkEvent", &UWillowAnimNode_Audio::StartAkEvent)
        .def_readwrite("StopAkEvent", &UWillowAnimNode_Audio::StopAkEvent)
        .def("StaticClass", &UWillowAnimNode_Audio::StaticClass, py::return_value_policy::reference)
        .def("eventOnCeaseRelevant", &UWillowAnimNode_Audio::eventOnCeaseRelevant)
        .def("eventOnBecomeRelevant", &UWillowAnimNode_Audio::eventOnBecomeRelevant)
        .def("IsValid", &UWillowAnimNode_Audio::IsValid)
          ;
}