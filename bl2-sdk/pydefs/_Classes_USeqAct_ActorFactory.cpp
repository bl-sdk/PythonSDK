#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ActorFactory(py::object m)
{
    py::class_< USeqAct_ActorFactory,  USeqAct_Latent   >(m, "USeqAct_ActorFactory")
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
        .def("StaticClass", &USeqAct_ActorFactory::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ActorFactory::eventGetObjClassVersion)
          ;
}