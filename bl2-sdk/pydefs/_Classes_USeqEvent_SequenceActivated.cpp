#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_SequenceActivated(py::object m)
{
    py::class_< USeqEvent_SequenceActivated,  USequenceEvent   >(m, "USeqEvent_SequenceActivated")
        .def_readwrite("InputLabel", &USeqEvent_SequenceActivated::InputLabel)
        .def("StaticClass", &USeqEvent_SequenceActivated::StaticClass, py::return_value_policy::reference)
          ;
}