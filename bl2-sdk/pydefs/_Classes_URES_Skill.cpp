#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Skill()
{
    class_< URES_Skill, bases< UActionResource >  , boost::noncopyable>("URES_Skill", no_init)
        .def("StaticClass", &URES_Skill::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}