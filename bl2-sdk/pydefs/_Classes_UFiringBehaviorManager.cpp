#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFiringBehaviorManager()
{
    class_< UFiringBehaviorManager, bases< UObject >  , boost::noncopyable>("UFiringBehaviorManager", no_init)
        .def_readwrite("CurrentFiringPattern", &UFiringBehaviorManager::CurrentFiringPattern)
        .def_readwrite("CurrentTargetExposure", &UFiringBehaviorManager::CurrentTargetExposure)
        .def_readwrite("NumShotsThisBurst", &UFiringBehaviorManager::NumShotsThisBurst)
        .def_readwrite("CachedTargetPoint", &UFiringBehaviorManager::CachedTargetPoint)
        .def_readwrite("CurrentZoneCollection", &UFiringBehaviorManager::CurrentZoneCollection)
        .def_readwrite("CurrentZone", &UFiringBehaviorManager::CurrentZone)
        .def_readwrite("CurrentBehavior", &UFiringBehaviorManager::CurrentBehavior)
        .def_readwrite("CurrentConditionalPattern", &UFiringBehaviorManager::CurrentConditionalPattern)
        .def_readwrite("DefaultFiringBehaviorDefinition", &UFiringBehaviorManager::DefaultFiringBehaviorDefinition)
        .def_readwrite("DefaultFiringPatternTemplate", &UFiringBehaviorManager::DefaultFiringPatternTemplate)
        .def("StaticClass", &UFiringBehaviorManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetTemplateClass", &UFiringBehaviorManager::eventGetTemplateClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}