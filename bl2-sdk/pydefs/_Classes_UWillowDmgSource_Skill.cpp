#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Skill()
{
    class_< UWillowDmgSource_Skill, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_Skill", no_init)
        .def("StaticClass", &UWillowDmgSource_Skill::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}