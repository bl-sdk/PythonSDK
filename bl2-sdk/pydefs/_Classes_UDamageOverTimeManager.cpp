#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageOverTimeManager()
{
    py::class_< UDamageOverTimeManager,  UObject   >("UDamageOverTimeManager")
        .def_readwrite("SourceObjects", &UDamageOverTimeManager::SourceObjects)
        .def_readwrite("DamageOnlyOnceActors", &UDamageOverTimeManager::DamageOnlyOnceActors)
        .def_readwrite("UniqueId", &UDamageOverTimeManager::UniqueId)
        .def("StaticClass", &UDamageOverTimeManager::StaticClass, py::return_value_policy::reference)
        .def("eventDoTakeRadiusDamage", &UDamageOverTimeManager::eventDoTakeRadiusDamage)
        .def("AddSourceObject", &UDamageOverTimeManager::AddSourceObject)
        .staticmethod("StaticClass")
  ;
}