#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AllPlayersInVolume()
{
    class_< USeqAct_AllPlayersInVolume, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AllPlayersInVolume", no_init)
        .def_readwrite("Volumes", &USeqAct_AllPlayersInVolume::Volumes)
        .def("StaticClass", &USeqAct_AllPlayersInVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("AllPlayersInVolumes", &USeqAct_AllPlayersInVolume::AllPlayersInVolumes)
        .def("PlayerIsInAVolume", &USeqAct_AllPlayersInVolume::PlayerIsInAVolume)
        .staticmethod("StaticClass")
  ;
}