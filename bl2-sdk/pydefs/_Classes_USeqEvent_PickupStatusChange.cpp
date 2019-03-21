#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_PickupStatusChange()
{
    py::class_< USeqEvent_PickupStatusChange,  USequenceEvent   >("USeqEvent_PickupStatusChange")
        .def("StaticClass", &USeqEvent_PickupStatusChange::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}