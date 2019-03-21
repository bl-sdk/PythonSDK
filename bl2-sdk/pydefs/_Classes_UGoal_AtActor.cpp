#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGoal_AtActor()
{
    class_< UGoal_AtActor, bases< UPathGoalEvaluator >  , boost::noncopyable>("UGoal_AtActor", no_init)
        .def_readwrite("GoalActor", &UGoal_AtActor::GoalActor)
        .def_readwrite("GoalDist", &UGoal_AtActor::GoalDist)
        .def("StaticClass", &UGoal_AtActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UGoal_AtActor::Recycle)
        .def("AtActor", &UGoal_AtActor::AtActor)
        .staticmethod("StaticClass")
  ;
}