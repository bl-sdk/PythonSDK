#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_SeamlessTravelComplete(py::module &m)
{
    py::class_< USeqEvent_SeamlessTravelComplete,  USequenceEvent   >(m, "USeqEvent_SeamlessTravelComplete")
		.def_static("StaticClass", &USeqEvent_SeamlessTravelComplete::StaticClass, py::return_value_policy::reference)
          ;
}