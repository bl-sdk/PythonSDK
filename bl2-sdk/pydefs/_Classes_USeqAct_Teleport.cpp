#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Teleport()
{
    class_< USeqAct_Teleport, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Teleport", no_init)
        .def_readwrite("TeleportDistance", &USeqAct_Teleport::TeleportDistance)
        .def_readwrite("TeleportVolumes", &USeqAct_Teleport::TeleportVolumes)
        .def_readwrite("Source", &USeqAct_Teleport::Source)
        .def_readwrite("ResurrectStation", &USeqAct_Teleport::ResurrectStation)
        .def("StaticClass", &USeqAct_Teleport::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_Teleport::eventGetObjClassVersion)
        .def("GetFirstValidActorFromObjectInput", &USeqAct_Teleport::GetFirstValidActorFromObjectInput, return_value_policy< reference_existing_object >())
        .def("GetTeleportHoldingCell", &USeqAct_Teleport::GetTeleportHoldingCell, return_value_policy< reference_existing_object >())
        .def("GetTeleportDestination", &USeqAct_Teleport::GetTeleportDestination, return_value_policy< reference_existing_object >())
        .def("ShouldTeleport", &USeqAct_Teleport::ShouldTeleport)
        .staticmethod("StaticClass")
  ;
}