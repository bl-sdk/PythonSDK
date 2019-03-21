#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Rotation()
{
    class_< URES_Rotation, bases< UActionResource >  , boost::noncopyable>("URES_Rotation", no_init)
        .def("StaticClass", &URES_Rotation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}