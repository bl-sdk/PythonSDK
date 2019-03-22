#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CounterAtTarget(py::module &m)
{
    py::class_< UWillowSeqEvent_CounterAtTarget,  USequenceEvent   >(m, "UWillowSeqEvent_CounterAtTarget")
        .def_readwrite("Event", &UWillowSeqEvent_CounterAtTarget::Event)
          ;
}