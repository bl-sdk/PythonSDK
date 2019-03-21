#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_Movement()
{
    class_< URES_Movement, bases< UActionResource >  , boost::noncopyable>("URES_Movement", no_init)
        .def("StaticClass", &URES_Movement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}