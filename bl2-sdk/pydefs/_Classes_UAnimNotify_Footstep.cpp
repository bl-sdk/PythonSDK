#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_Footstep()
{
    class_< UAnimNotify_Footstep, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_Footstep", no_init)
        .def_readwrite("FootDown", &UAnimNotify_Footstep::FootDown)
        .def("StaticClass", &UAnimNotify_Footstep::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}