#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Moving()
{
    class_< URES_Moving, bases< UActionResource >  , boost::noncopyable>("URES_Moving", no_init)
        .def("StaticClass", &URES_Moving::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}