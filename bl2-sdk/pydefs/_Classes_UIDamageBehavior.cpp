#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDamageBehavior()
{
    class_< UIDamageBehavior, bases< UInterface >  , boost::noncopyable>("UIDamageBehavior", no_init)
        .def("StaticClass", &UIDamageBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_CauseRadiusDamage", &UIDamageBehavior::Behavior_CauseRadiusDamage)
        .def("Behavior_CauseDamage", &UIDamageBehavior::Behavior_CauseDamage)
        .staticmethod("StaticClass")
  ;
}