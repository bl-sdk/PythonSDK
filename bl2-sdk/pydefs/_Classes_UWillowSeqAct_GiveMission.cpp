#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_GiveMission(py::module &m)
{
    py::class_< UWillowSeqAct_GiveMission,  USequenceAction   >(m, "UWillowSeqAct_GiveMission")
        .def_readwrite("AssociatedMission", &UWillowSeqAct_GiveMission::AssociatedMission)
          ;
}