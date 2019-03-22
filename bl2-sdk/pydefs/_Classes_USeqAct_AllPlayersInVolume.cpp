#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AllPlayersInVolume(py::module &m)
{
    py::class_< USeqAct_AllPlayersInVolume,  USequenceAction   >(m, "USeqAct_AllPlayersInVolume")
        .def_readwrite("Volumes", &USeqAct_AllPlayersInVolume::Volumes)
        .def("AllPlayersInVolumes", &USeqAct_AllPlayersInVolume::AllPlayersInVolumes)
        .def("PlayerIsInAVolume", &USeqAct_AllPlayersInVolume::PlayerIsInAVolume)
          ;
}