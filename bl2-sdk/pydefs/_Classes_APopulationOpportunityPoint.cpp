#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APopulationOpportunityPoint()
{
    class_< APopulationOpportunityPoint, bases< APopulationOpportunity >  , boost::noncopyable>("APopulationOpportunityPoint", no_init)
        .def_readwrite("VfTable_IIPopulationSpawnPoint", &APopulationOpportunityPoint::VfTable_IIPopulationSpawnPoint)
        .def_readwrite("PopulationDef", &APopulationOpportunityPoint::PopulationDef)
        .def_readwrite("SpawnAndCullRadius", &APopulationOpportunityPoint::SpawnAndCullRadius)
        .def_readwrite("SpawnCustomizations", &APopulationOpportunityPoint::SpawnCustomizations)
        .def_readwrite("AISpawnStyle", &APopulationOpportunityPoint::AISpawnStyle)
        .def_readwrite("InitialAction", &APopulationOpportunityPoint::InitialAction)
        .def_readwrite("InitialActionDestinations", &APopulationOpportunityPoint::InitialActionDestinations)
        .def("StaticClass", &APopulationOpportunityPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearBodyCompositionInstance", &APopulationOpportunityPoint::ClearBodyCompositionInstance)
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityPoint::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityPoint::GetBodyInfoProvider, return_value_policy< reference_existing_object >())
        .def("ChangeInstanceDataSwitch", &APopulationOpportunityPoint::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &APopulationOpportunityPoint::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &APopulationOpportunityPoint::PreRemoveBodyComposition)
        .def("GetInitialMovementHoldTime", &APopulationOpportunityPoint::GetInitialMovementHoldTime)
        .def("GetInitialDestination", &APopulationOpportunityPoint::GetInitialDestination, return_value_policy< reference_existing_object >())
        .def("GetInitialActionType", &APopulationOpportunityPoint::GetInitialActionType)
        .def("GetSpawnStyleType", &APopulationOpportunityPoint::GetSpawnStyleType)
        .def("RespawnKilledActors", &APopulationOpportunityPoint::RespawnKilledActors)
        .def("DoSpawning", &APopulationOpportunityPoint::DoSpawning)
        .staticmethod("StaticClass")
  ;
}