#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Posture()
{
    class_< URES_Posture, bases< UActionResource >  , boost::noncopyable>("URES_Posture", no_init)
        .def("StaticClass", &URES_Posture::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}