#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringBehaviorManager(py::object m)
{
    py::class_< UFiringBehaviorManager,  UObject   >(m, "UFiringBehaviorManager")
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
        .def("StaticClass", &UFiringBehaviorManager::StaticClass, py::return_value_policy::reference)
        .def("eventGetTemplateClass", &UFiringBehaviorManager::eventGetTemplateClass, py::return_value_policy::reference)
          ;
}