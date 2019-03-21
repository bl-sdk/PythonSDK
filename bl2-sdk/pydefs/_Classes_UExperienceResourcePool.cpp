#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExperienceResourcePool()
{
    class_< UExperienceResourcePool, bases< UResourcePool >  , boost::noncopyable>("UExperienceResourcePool", no_init)
        .def_readwrite("ExpCombatPointsScale", &UExperienceResourcePool::ExpCombatPointsScale)
        .def_readwrite("ExpCombatPointsScaleBaseValue", &UExperienceResourcePool::ExpCombatPointsScaleBaseValue)
        .def_readwrite("ExpCombatPointsScaleModifierStack", &UExperienceResourcePool::ExpCombatPointsScaleModifierStack)
        .def_readwrite("ExpMissionPointsScale", &UExperienceResourcePool::ExpMissionPointsScale)
        .def_readwrite("ExpMissionPointsScaleBaseValue", &UExperienceResourcePool::ExpMissionPointsScaleBaseValue)
        .def_readwrite("ExpMissionPointsScaleModifierStack", &UExperienceResourcePool::ExpMissionPointsScaleModifierStack)
        .def_readwrite("ExpAllPointsScale", &UExperienceResourcePool::ExpAllPointsScale)
        .def_readwrite("ExpAllPointsScaleBaseValue", &UExperienceResourcePool::ExpAllPointsScaleBaseValue)
        .def_readwrite("ExpAllPointsScaleModifierStack", &UExperienceResourcePool::ExpAllPointsScaleModifierStack)
        .def("StaticClass", &UExperienceResourcePool::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyExpPointsToExpLevel", &UExperienceResourcePool::ApplyExpPointsToExpLevel)
        .staticmethod("StaticClass")
  ;
}