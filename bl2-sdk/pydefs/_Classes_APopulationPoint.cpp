#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationPoint(py::module &m)
{
    py::class_< APopulationPoint,  AActor   >(m, "APopulationPoint")
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
        .def("StaticClass", &APopulationPoint::StaticClass, py::return_value_policy::reference)
        .def("CanSpawnFromFactory", &APopulationPoint::CanSpawnFromFactory)
        .def("GetSpawnRotation", &APopulationPoint::GetSpawnRotation)
        .def("GetSpawnLocation", &APopulationPoint::GetSpawnLocation)
        .def("ActorSpawned", &APopulationPoint::ActorSpawned)
        .def("GetInitialMovementHoldTime", &APopulationPoint::GetInitialMovementHoldTime)
        .def("GetInitialDestination", &APopulationPoint::GetInitialDestination, py::return_value_policy::reference)
        .def("RandomizeInitialDestinations", &APopulationPoint::RandomizeInitialDestinations)
        .def("GetInitialActionType", &APopulationPoint::GetInitialActionType)
        .def("GetSpawnStyleType", &APopulationPoint::GetSpawnStyleType)
        .def("OnToggle", &APopulationPoint::OnToggle)
          ;
}