#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_AnimNotify()
{
    py::class_< USeqEvent_AnimNotify,  USequenceEvent   >("USeqEvent_AnimNotify")
        .def_readwrite("NotifyName", &USeqEvent_AnimNotify::NotifyName)
        .def("StaticClass", &USeqEvent_AnimNotify::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}