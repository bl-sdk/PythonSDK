#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAIDefinition()
{
    class_< UWillowAIDefinition, bases< UAIDefinition >  , boost::noncopyable>("UWillowAIDefinition", no_init)
        .def_readwrite("PatrolAction", &UWillowAIDefinition::PatrolAction)
        .def_readwrite("ScriptedAction", &UWillowAIDefinition::ScriptedAction)
        .def_readwrite("WantsFormation", &UWillowAIDefinition::WantsFormation)
        .def_readwrite("ReacquireTime", &UWillowAIDefinition::ReacquireTime)
        .def_readwrite("ReacquireDistance", &UWillowAIDefinition::ReacquireDistance)
        .def_readwrite("SuppressionFireTime", &UWillowAIDefinition::SuppressionFireTime)
        .def("StaticClass", &UWillowAIDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnRevivedPlayerMaster", &UWillowAIDefinition::OnRevivedPlayerMaster)
        .def("OnDismount", &UWillowAIDefinition::OnDismount)
        .staticmethod("StaticClass")
  ;
}