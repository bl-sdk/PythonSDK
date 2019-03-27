#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_PlayerJoined(py::module &m)
{
    py::class_< UWillowSeqEvent_PlayerJoined,  USequenceEvent   >(m, "UWillowSeqEvent_PlayerJoined")
		.def_static("StaticClass", &UWillowSeqEvent_PlayerJoined::StaticClass, py::return_value_policy::reference)
          ;
}