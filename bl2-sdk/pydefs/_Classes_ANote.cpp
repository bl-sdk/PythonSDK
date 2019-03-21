#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANote()
{
    class_< ANote, bases< AActor >  , boost::noncopyable>("ANote", no_init)
        .def("StaticClass", &ANote::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}