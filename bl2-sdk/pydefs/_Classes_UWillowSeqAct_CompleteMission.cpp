#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CompleteMission(py::module &m)
{
    py::class_< UWillowSeqAct_CompleteMission,  USequenceAction   >(m, "UWillowSeqAct_CompleteMission")
		.def_static("StaticClass", &UWillowSeqAct_CompleteMission::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AssociatedMission", &UWillowSeqAct_CompleteMission::AssociatedMission)
          ;
}