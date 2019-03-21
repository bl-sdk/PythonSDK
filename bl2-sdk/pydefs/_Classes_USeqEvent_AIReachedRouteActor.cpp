#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_AIReachedRouteActor(py::object m)
{
    py::class_< USeqEvent_AIReachedRouteActor,  USequenceEvent   >(m, "USeqEvent_AIReachedRouteActor")
        .def("StaticClass", &USeqEvent_AIReachedRouteActor::StaticClass, py::return_value_policy::reference)
          ;
}