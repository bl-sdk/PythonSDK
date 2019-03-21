#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterface_Speaker()
{
    class_< UInterface_Speaker, bases< UInterface >  , boost::noncopyable>("UInterface_Speaker", no_init)
        .def("StaticClass", &UInterface_Speaker::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSpeak", &UInterface_Speaker::eventSpeak)
        .staticmethod("StaticClass")
  ;
}