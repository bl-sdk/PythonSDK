#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_AIReachedRouteActor(py::module &m)
{
    py::class_< USeqEvent_AIReachedRouteActor,  USequenceEvent   >(m, "USeqEvent_AIReachedRouteActor")
		.def_static("StaticClass", &USeqEvent_AIReachedRouteActor::StaticClass, py::return_value_policy::reference)
          ;
}