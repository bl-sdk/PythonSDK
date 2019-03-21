#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APopulationPoint()
{
    class_< APopulationPoint, bases< AActor >  , boost::noncopyable>("APopulationPoint", no_init)
        .def_readwrite("VfTable_IIPopulationSpawnPoint", &APopulationPoint::VfTable_IIPopulationSpawnPoint)
        .def_readwrite("Flags", &APopulationPoint::Flags)
        .def_readwrite("AISpawnStyle", &APopulationPoint::AISpawnStyle)
        .def_readwrite("InitialAction", &APopulationPoint::InitialAction)
        .def_readwrite("ConstraintType", &APopulationPoint::ConstraintType)
        .def_readwrite("InitialActionDestinations", &APopulationPoint::InitialActionDestinations)
        .def_readwrite("InitialMovementHoldTime", &APopulationPoint::InitialMovementHoldTime)
        .def_readwrite("InitialDestinationIndex", &APopulationPoint::InitialDestinationIndex)
        .def_readwrite("TagsToUseWithConstraint", &APopulationPoint::TagsToUseWithConstraint)
        .def_readwrite("OnSpawnCustomizations", &APopulationPoint::OnSpawnCustomizations)
        .def_readwrite("MinSpawnDistance", &APopulationPoint::MinSpawnDistance)
        .def("StaticClass", &APopulationPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanSpawnFromFactory", &APopulationPoint::CanSpawnFromFactory)
        .def("GetSpawnRotation", &APopulationPoint::GetSpawnRotation)
        .def("GetSpawnLocation", &APopulationPoint::GetSpawnLocation)
        .def("ActorSpawned", &APopulationPoint::ActorSpawned)
        .def("GetInitialMovementHoldTime", &APopulationPoint::GetInitialMovementHoldTime)
        .def("GetInitialDestination", &APopulationPoint::GetInitialDestination, return_value_policy< reference_existing_object >())
        .def("RandomizeInitialDestinations", &APopulationPoint::RandomizeInitialDestinations)
        .def("GetInitialActionType", &APopulationPoint::GetInitialActionType)
        .def("GetSpawnStyleType", &APopulationPoint::GetSpawnStyleType)
        .def("OnToggle", &APopulationPoint::OnToggle)
        .staticmethod("StaticClass")
  ;
}