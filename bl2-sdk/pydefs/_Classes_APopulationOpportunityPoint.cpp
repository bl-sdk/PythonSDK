#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationOpportunityPoint(py::module &m)
{
    py::class_< APopulationOpportunityPoint,  APopulationOpportunity   >(m, "APopulationOpportunityPoint")
        .def_readwrite("VfTable_IIPopulationSpawnPoint", &APopulationOpportunityPoint::VfTable_IIPopulationSpawnPoint)
        .def_readwrite("PopulationDef", &APopulationOpportunityPoint::PopulationDef)
        .def_readwrite("SpawnAndCullRadius", &APopulationOpportunityPoint::SpawnAndCullRadius)
        .def_readwrite("SpawnCustomizations", &APopulationOpportunityPoint::SpawnCustomizations)
        .def_readwrite("AISpawnStyle", &APopulationOpportunityPoint::AISpawnStyle)
        .def_readwrite("InitialAction", &APopulationOpportunityPoint::InitialAction)
        .def_readwrite("InitialActionDestinations", &APopulationOpportunityPoint::InitialActionDestinations)
        .def("StaticClass", &APopulationOpportunityPoint::StaticClass, py::return_value_policy::reference)
        .def("ClearBodyCompositionInstance", &APopulationOpportunityPoint::ClearBodyCompositionInstance)
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityPoint::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityPoint::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("ChangeInstanceDataSwitch", &APopulationOpportunityPoint::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &APopulationOpportunityPoint::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &APopulationOpportunityPoint::PreRemoveBodyComposition)
        .def("GetInitialMovementHoldTime", &APopulationOpportunityPoint::GetInitialMovementHoldTime)
        .def("GetInitialDestination", &APopulationOpportunityPoint::GetInitialDestination, py::return_value_policy::reference)
        .def("GetInitialActionType", &APopulationOpportunityPoint::GetInitialActionType)
        .def("GetSpawnStyleType", &APopulationOpportunityPoint::GetSpawnStyleType)
        .def("RespawnKilledActors", &APopulationOpportunityPoint::RespawnKilledActors)
        .def("DoSpawning", &APopulationOpportunityPoint::DoSpawning)
          ;
}