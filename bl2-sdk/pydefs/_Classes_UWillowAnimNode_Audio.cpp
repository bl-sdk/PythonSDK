#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Audio(py::module &m)
{
    py::class_< UWillowAnimNode_Audio,  UAnimNodeBlendBase   >(m, "UWillowAnimNode_Audio")
        .def_readwrite("StartAkEvent", &UWillowAnimNode_Audio::StartAkEvent)
        .def_readwrite("StopAkEvent", &UWillowAnimNode_Audio::StopAkEvent)
        .def("eventOnCeaseRelevant", &UWillowAnimNode_Audio::eventOnCeaseRelevant)
        .def("eventOnBecomeRelevant", &UWillowAnimNode_Audio::eventOnBecomeRelevant)
        .def("IsValid", &UWillowAnimNode_Audio::IsValid)
          ;
}