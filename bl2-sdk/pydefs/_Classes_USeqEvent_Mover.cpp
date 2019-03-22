#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Mover(py::module &m)
{
    py::class_< USeqEvent_Mover,  USequenceEvent   >(m, "USeqEvent_Mover")
        .def_readwrite("StayOpenTime", &USeqEvent_Mover::StayOpenTime)
        .def("StaticClass", &USeqEvent_Mover::StaticClass, py::return_value_policy::reference)
        .def("NotifyFinishedOpen", &USeqEvent_Mover::NotifyFinishedOpen)
        .def("NotifyDetached", &USeqEvent_Mover::NotifyDetached)
        .def("NotifyAttached", &USeqEvent_Mover::NotifyAttached)
        .def("NotifyEncroachingOn", &USeqEvent_Mover::NotifyEncroachingOn)
        .def("eventRegisterEvent", &USeqEvent_Mover::eventRegisterEvent)
          ;
}