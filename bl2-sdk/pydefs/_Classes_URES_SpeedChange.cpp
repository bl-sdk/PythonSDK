#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_SpeedChange()
{
    class_< URES_SpeedChange, bases< UActionResource >  , boost::noncopyable>("URES_SpeedChange", no_init)
        .def("StaticClass", &URES_SpeedChange::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}