#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Sound()
{
    class_< URES_Sound, bases< UActionResource >  , boost::noncopyable>("URES_Sound", no_init)
        .def("StaticClass", &URES_Sound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}