#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_PickupStatusChange(py::module &m)
{
    py::class_< USeqEvent_PickupStatusChange,  USequenceEvent   >(m, "USeqEvent_PickupStatusChange")
		.def_static("StaticClass", &USeqEvent_PickupStatusChange::StaticClass, py::return_value_policy::reference)
          ;
}