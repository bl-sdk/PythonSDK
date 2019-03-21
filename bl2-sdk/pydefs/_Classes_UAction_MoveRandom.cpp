#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_MoveRandom()
{
    class_< UAction_MoveRandom, bases< UActionSequencePawn >  , boost::noncopyable>("UAction_MoveRandom", no_init)
        .def("StaticClass", &UAction_MoveRandom::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}