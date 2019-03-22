#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Used(py::module &m)
{
    py::class_< USeqEvent_Used,  USequenceEvent   >(m, "USeqEvent_Used")
        .def_readwrite("InteractDistance", &USeqEvent_Used::InteractDistance)
        .def_readwrite("InteractText", &USeqEvent_Used::InteractText)
        .def_readwrite("InteractIcon", &USeqEvent_Used::InteractIcon)
        .def_readwrite("ClassProximityTypes", &USeqEvent_Used::ClassProximityTypes)
        .def_readwrite("IgnoredClassProximityTypes", &USeqEvent_Used::IgnoredClassProximityTypes)
          ;
}