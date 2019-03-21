#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActionSequencePawn()
{
    class_< UActionSequencePawn, bases< UActionSequence >  , boost::noncopyable>("UActionSequencePawn", no_init)
        .def_readwrite("MyGearboxMind", &UActionSequencePawn::MyGearboxMind)
        .def_readwrite("MyGearboxPawn", &UActionSequencePawn::MyGearboxPawn)
        .def("StaticClass", &UActionSequencePawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}