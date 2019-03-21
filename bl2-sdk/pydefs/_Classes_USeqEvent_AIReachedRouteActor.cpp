#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_AIReachedRouteActor()
{
    py::class_< USeqEvent_AIReachedRouteActor,  USequenceEvent   >("USeqEvent_AIReachedRouteActor")
        .def("StaticClass", &USeqEvent_AIReachedRouteActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}