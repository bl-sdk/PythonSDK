#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ActivateRemoteEvent(py::module &m)
{
    py::class_< USeqAct_ActivateRemoteEvent,  USequenceAction   >(m, "USeqAct_ActivateRemoteEvent")
        .def_readwrite("Instigator", &USeqAct_ActivateRemoteEvent::Instigator)
        .def_readwrite("EventName", &USeqAct_ActivateRemoteEvent::EventName)
        .def("StaticClass", &USeqAct_ActivateRemoteEvent::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ActivateRemoteEvent::eventGetObjClassVersion)
          ;
}