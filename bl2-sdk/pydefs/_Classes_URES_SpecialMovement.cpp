#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_SpecialMovement()
{
    class_< URES_SpecialMovement, bases< UActionResource >  , boost::noncopyable>("URES_SpecialMovement", no_init)
        .def("StaticClass", &URES_SpecialMovement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}