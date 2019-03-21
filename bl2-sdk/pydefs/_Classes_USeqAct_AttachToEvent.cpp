#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AttachToEvent()
{
    py::class_< USeqAct_AttachToEvent,  USequenceAction   >("USeqAct_AttachToEvent")
        .def("StaticClass", &USeqAct_AttachToEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}