#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExperienceResourcePool(py::module &m)
{
    py::class_< UExperienceResourcePool,  UResourcePool   >(m, "UExperienceResourcePool")
		.def_static("StaticClass", &UExperienceResourcePool::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ExpCombatPointsScale", &UExperienceResourcePool::ExpCombatPointsScale)
        .def_readwrite("ExpCombatPointsScaleBaseValue", &UExperienceResourcePool::ExpCombatPointsScaleBaseValue)
        .def_readwrite("ExpCombatPointsScaleModifierStack", &UExperienceResourcePool::ExpCombatPointsScaleModifierStack)
        .def_readwrite("ExpMissionPointsScale", &UExperienceResourcePool::ExpMissionPointsScale)
        .def_readwrite("ExpMissionPointsScaleBaseValue", &UExperienceResourcePool::ExpMissionPointsScaleBaseValue)
        .def_readwrite("ExpMissionPointsScaleModifierStack", &UExperienceResourcePool::ExpMissionPointsScaleModifierStack)
        .def_readwrite("ExpAllPointsScale", &UExperienceResourcePool::ExpAllPointsScale)
        .def_readwrite("ExpAllPointsScaleBaseValue", &UExperienceResourcePool::ExpAllPointsScaleBaseValue)
        .def_readwrite("ExpAllPointsScaleModifierStack", &UExperienceResourcePool::ExpAllPointsScaleModifierStack)
        .def("ApplyExpPointsToExpLevel", &UExperienceResourcePool::ApplyExpPointsToExpLevel)
          ;
}