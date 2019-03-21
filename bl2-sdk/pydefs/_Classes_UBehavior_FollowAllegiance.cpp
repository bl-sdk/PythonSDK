#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_FollowAllegiance()
{
    class_< UBehavior_FollowAllegiance, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_FollowAllegiance", no_init)
        .def_readwrite("Action", &UBehavior_FollowAllegiance::Action)
        .def_readwrite("AllegianceParent", &UBehavior_FollowAllegiance::AllegianceParent)
        .def("StaticClass", &UBehavior_FollowAllegiance::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_FollowAllegiance::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}