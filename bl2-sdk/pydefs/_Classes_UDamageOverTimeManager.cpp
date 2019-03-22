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
        .def("StaticClass", &UDamageOverTimeManager::StaticClass, py::return_value_policy::reference)
        .def("eventDoTakeRadiusDamage", &UDamageOverTimeManager::eventDoTakeRadiusDamage)
        .def("AddSourceObject", &UDamageOverTimeManager::AddSourceObject)
          ;
}