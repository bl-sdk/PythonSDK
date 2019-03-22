#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIDefinition(py::module &m)
{
    py::class_< UWillowAIDefinition,  UAIDefinition   >(m, "UWillowAIDefinition")
        .def_readwrite("PatrolAction", &UWillowAIDefinition::PatrolAction)
        .def_readwrite("ScriptedAction", &UWillowAIDefinition::ScriptedAction)
        .def_readwrite("WantsFormation", &UWillowAIDefinition::WantsFormation)
        .def_readwrite("ReacquireTime", &UWillowAIDefinition::ReacquireTime)
        .def_readwrite("ReacquireDistance", &UWillowAIDefinition::ReacquireDistance)
        .def_readwrite("SuppressionFireTime", &UWillowAIDefinition::SuppressionFireTime)
        .def("StaticClass", &UWillowAIDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnRevivedPlayerMaster", &UWillowAIDefinition::OnRevivedPlayerMaster)
        .def("OnDismount", &UWillowAIDefinition::OnDismount)
          ;
}