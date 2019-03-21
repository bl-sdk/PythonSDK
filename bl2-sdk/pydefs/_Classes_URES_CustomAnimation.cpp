#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_CustomAnimation()
{
    class_< URES_CustomAnimation, bases< UActionResource >  , boost::noncopyable>("URES_CustomAnimation", no_init)
        .def("StaticClass", &URES_CustomAnimation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}