#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UILootable()
{
    class_< UILootable, bases< UInterface >  , boost::noncopyable>("UILootable", no_init)
        .def("StaticClass", &UILootable::StaticClass, return_value_policy< reference_existing_object >())
        .def("WillLootableBeResetOnLevelLoad", &UILootable::WillLootableBeResetOnLevelLoad)
        .def("GetDroppedLoot", &UILootable::GetDroppedLoot)
        .def("GetAttachedLoot", &UILootable::GetAttachedLoot)
        .staticmethod("StaticClass")
  ;
}