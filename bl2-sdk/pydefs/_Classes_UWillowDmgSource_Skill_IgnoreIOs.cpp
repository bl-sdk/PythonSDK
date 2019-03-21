#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Skill_IgnoreIOs()
{
    class_< UWillowDmgSource_Skill_IgnoreIOs, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_Skill_IgnoreIOs", no_init)
        .def("StaticClass", &UWillowDmgSource_Skill_IgnoreIOs::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}