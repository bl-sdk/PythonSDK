#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDamageOverTimeManager()
{
    class_< UDamageOverTimeManager, bases< UObject >  , boost::noncopyable>("UDamageOverTimeManager", no_init)
        .def_readwrite("SourceObjects", &UDamageOverTimeManager::SourceObjects)
        .def_readwrite("DamageOnlyOnceActors", &UDamageOverTimeManager::DamageOnlyOnceActors)
        .def_readwrite("UniqueId", &UDamageOverTimeManager::UniqueId)
        .def("StaticClass", &UDamageOverTimeManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDoTakeRadiusDamage", &UDamageOverTimeManager::eventDoTakeRadiusDamage)
        .def("AddSourceObject", &UDamageOverTimeManager::AddSourceObject)
        .staticmethod("StaticClass")
  ;
}