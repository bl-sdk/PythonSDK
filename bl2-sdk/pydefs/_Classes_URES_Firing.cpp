#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Firing()
{
    class_< URES_Firing, bases< UActionResource >  , boost::noncopyable>("URES_Firing", no_init)
        .def("StaticClass", &URES_Firing::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}