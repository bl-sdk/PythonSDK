#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISkillTreeListener()
{
    class_< UISkillTreeListener, bases< UInterface >  , boost::noncopyable>("UISkillTreeListener", no_init)
        .def("StaticClass", &UISkillTreeListener::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleSkillTreeReset", &UISkillTreeListener::HandleSkillTreeReset)
        .staticmethod("StaticClass")
  ;
}