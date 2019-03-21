#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedSpecialMoveData()
{
    class_< FReplicatedSpecialMoveData >("FReplicatedSpecialMoveData", no_init)
        .def_readwrite("Data", &FReplicatedSpecialMoveData::Data)
        .def_readwrite("PlayRateScale", &FReplicatedSpecialMoveData::PlayRateScale)
        .def_readwrite("Duration", &FReplicatedSpecialMoveData::Duration)
        .def_readwrite("DirtyCounter", &FReplicatedSpecialMoveData::DirtyCounter)
        .def_readwrite("SMD", &FReplicatedSpecialMoveData::SMD)
  ;
}