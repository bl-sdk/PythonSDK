#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChallengeConditionDefinition()
{
    class_< UChallengeConditionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UChallengeConditionDefinition", no_init)
        .def_readwrite("Description", &UChallengeConditionDefinition::Description)
        .def_readwrite("StatId", &UChallengeConditionDefinition::StatId)
        .def_readwrite("TargetValue", &UChallengeConditionDefinition::TargetValue)
        .def("StaticClass", &UChallengeConditionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}