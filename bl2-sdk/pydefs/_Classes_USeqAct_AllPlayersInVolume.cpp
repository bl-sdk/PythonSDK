#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AllPlayersInVolume()
{
    py::class_< USeqAct_AllPlayersInVolume,  USequenceAction   >("USeqAct_AllPlayersInVolume")
        .def_readwrite("Volumes", &USeqAct_AllPlayersInVolume::Volumes)
        .def("StaticClass", &USeqAct_AllPlayersInVolume::StaticClass, py::return_value_policy::reference)
        .def("AllPlayersInVolumes", &USeqAct_AllPlayersInVolume::AllPlayersInVolumes)
        .def("PlayerIsInAVolume", &USeqAct_AllPlayersInVolume::PlayerIsInAVolume)
        .staticmethod("StaticClass")
  ;
}