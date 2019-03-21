#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ActorFactoryEx()
{
    class_< USeqAct_ActorFactoryEx, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_ActorFactoryEx", no_init)
        .def_readwrite("Factory", &USeqAct_ActorFactory::Factory)
        .def_readwrite("PointSelection", &USeqAct_ActorFactory::PointSelection)
        .def_readwrite("SpawnPoints", &USeqAct_ActorFactory::SpawnPoints)
        .def_readwrite("SpawnLocations", &USeqAct_ActorFactory::SpawnLocations)
        .def_readwrite("SpawnOrientations", &USeqAct_ActorFactory::SpawnOrientations)
        .def_readwrite("SpawnCount", &USeqAct_ActorFactory::SpawnCount)
        .def_readwrite("SpawnDelay", &USeqAct_ActorFactory::SpawnDelay)
        .def_readwrite("LastSpawnIdx", &USeqAct_ActorFactory::LastSpawnIdx)
        .def_readwrite("SpawnedCount", &USeqAct_ActorFactory::SpawnedCount)
        .def_readwrite("RemainingDelay", &USeqAct_ActorFactory::RemainingDelay)
        .def("StaticClass", &USeqAct_ActorFactoryEx::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ActorFactory::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}