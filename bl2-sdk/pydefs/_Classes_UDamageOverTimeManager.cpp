#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageOverTimeManager(py::module &m)
{
    py::class_< UDamageOverTimeManager,  UObject   >(m, "UDamageOverTimeManager")
        .def_readwrite("SourceObjects", &UDamageOverTimeManager::SourceObjects)
        .def_readwrite("DamageOnlyOnceActors", &UDamageOverTimeManager::DamageOnlyOnceActors)
        .def_readwrite("UniqueId", &UDamageOverTimeManager::UniqueId)
        .def("eventDoTakeRadiusDamage", &UDamageOverTimeManager::eventDoTakeRadiusDamage)
        .def("AddSourceObject", &UDamageOverTimeManager::AddSourceObject)
          ;
}