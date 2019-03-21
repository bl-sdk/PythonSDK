#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Behavior()
{
    class_< URES_Behavior, bases< UActionResource >  , boost::noncopyable>("URES_Behavior", no_init)
        .def("StaticClass", &URES_Behavior::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}