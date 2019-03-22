#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryInteractiveObject(py::module &m)
{
    py::class_< UPopulationFactoryInteractiveObject,  UPopulationFactory   >(m, "UPopulationFactoryInteractiveObject")
        .def_readwrite("ObjectDefinition", &UPopulationFactoryInteractiveObject::ObjectDefinition)
        .def_readwrite("ObjectBalanceDefinition", &UPopulationFactoryInteractiveObject::ObjectBalanceDefinition)
        .def_readwrite("EnabledBehaviorSets", &UPopulationFactoryInteractiveObject::EnabledBehaviorSets)
        .def_readwrite("AttributeStartingValues", &UPopulationFactoryInteractiveObject::AttributeStartingValues)
        .def("StaticClass", &UPopulationFactoryInteractiveObject::StaticClass, py::return_value_policy::reference)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryInteractiveObject::eventGetDescriptionOfFactoryOutput)
        .def("GetSpawnLocation", &UPopulationFactoryInteractiveObject::GetSpawnLocation)
        .def("CreateInteractiveObject", &UPopulationFactoryInteractiveObject::CreateInteractiveObject, py::return_value_policy::reference)
        .def("eventGetPopulatedInteractiveObjectMemento", &UPopulationFactoryInteractiveObject::eventGetPopulatedInteractiveObjectMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryInteractiveObject::eventShouldSavePopulationActor)
        .def("eventRestoreInteractiveObject", &UPopulationFactoryInteractiveObject::eventRestoreInteractiveObject, py::return_value_policy::reference)
        .def("eventCreatePopulationActor", &UPopulationFactoryInteractiveObject::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryInteractiveObject::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryInteractiveObject::GetActorAllegiance, py::return_value_policy::reference)
        .def("GetObjectDefinition", &UPopulationFactoryInteractiveObject::GetObjectDefinition, py::return_value_policy::reference)
          ;
}