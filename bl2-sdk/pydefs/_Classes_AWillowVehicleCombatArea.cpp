#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicleCombatArea()
{
    py::class_< AWillowVehicleCombatArea,  AActor   >("AWillowVehicleCombatArea")
        .def_readwrite("CombatRadius", &AWillowVehicleCombatArea::CombatRadius)
        .def_readwrite("CombatDisplayHeight", &AWillowVehicleCombatArea::CombatDisplayHeight)
        .def_readwrite("NextVehicleCombatArea", &AWillowVehicleCombatArea::NextVehicleCombatArea)
        .def("StaticClass", &AWillowVehicleCombatArea::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyed", &AWillowVehicleCombatArea::eventDestroyed)
        .def("eventPostBeginPlay", &AWillowVehicleCombatArea::eventPostBeginPlay)
        .def("IsActorInside", &AWillowVehicleCombatArea::IsActorInside)
        .def("RemoveFromList", &AWillowVehicleCombatArea::RemoveFromList)
        .def("AddToList", &AWillowVehicleCombatArea::AddToList)
        .staticmethod("StaticClass")
  ;
}