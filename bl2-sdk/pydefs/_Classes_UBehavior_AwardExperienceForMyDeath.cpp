#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AwardExperienceForMyDeath()
{
    class_< UBehavior_AwardExperienceForMyDeath, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AwardExperienceForMyDeath", no_init)
        .def("StaticClass", &UBehavior_AwardExperienceForMyDeath::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AwardExperienceForMyDeath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}