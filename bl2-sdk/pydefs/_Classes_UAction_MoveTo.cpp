#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_MoveTo()
{
    class_< UAction_MoveTo, bases< UActionSequencePawn >  , boost::noncopyable>("UAction_MoveTo", no_init)
        .def("StaticClass", &UAction_MoveTo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}