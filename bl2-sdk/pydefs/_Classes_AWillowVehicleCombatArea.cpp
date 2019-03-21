#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVehicleCombatArea()
{
    class_< AWillowVehicleCombatArea, bases< AActor >  , boost::noncopyable>("AWillowVehicleCombatArea", no_init)
        .def_readwrite("CombatRadius", &AWillowVehicleCombatArea::CombatRadius)
        .def_readwrite("CombatDisplayHeight", &AWillowVehicleCombatArea::CombatDisplayHeight)
        .def_readwrite("NextVehicleCombatArea", &AWillowVehicleCombatArea::NextVehicleCombatArea)
        .def("StaticClass", &AWillowVehicleCombatArea::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &AWillowVehicleCombatArea::eventDestroyed)
        .def("eventPostBeginPlay", &AWillowVehicleCombatArea::eventPostBeginPlay)
        .def("IsActorInside", &AWillowVehicleCombatArea::IsActorInside)
        .def("RemoveFromList", &AWillowVehicleCombatArea::RemoveFromList)
        .def("AddToList", &AWillowVehicleCombatArea::AddToList)
        .staticmethod("StaticClass")
  ;
}