#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_SpecialMove()
{
    class_< URES_SpecialMove, bases< UActionResource >  , boost::noncopyable>("URES_SpecialMove", no_init)
        .def("StaticClass", &URES_SpecialMove::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}