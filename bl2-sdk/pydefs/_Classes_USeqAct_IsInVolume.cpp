#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_IsInVolume()
{
    py::class_< USeqAct_IsInVolume,  USequenceAction   >("USeqAct_IsInVolume")
        .def_readwrite("Volumes", &USeqAct_IsInVolume::Volumes)
        .def_readwrite("Actors", &USeqAct_IsInVolume::Actors)
        .def("StaticClass", &USeqAct_IsInVolume::StaticClass, py::return_value_policy::reference)
        .def("ActorIsInAnyVolumes", &USeqAct_IsInVolume::ActorIsInAnyVolumes)
        .staticmethod("StaticClass")
  ;
}