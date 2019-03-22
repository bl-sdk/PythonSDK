#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_IsInVolume(py::module &m)
{
    py::class_< USeqAct_IsInVolume,  USequenceAction   >(m, "USeqAct_IsInVolume")
        .def_readwrite("Volumes", &USeqAct_IsInVolume::Volumes)
        .def_readwrite("Actors", &USeqAct_IsInVolume::Actors)
        .def("ActorIsInAnyVolumes", &USeqAct_IsInVolume::ActorIsInAnyVolumes)
          ;
}