#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_FaceThreat()
{
    class_< UAction_FaceThreat, bases< UActionSequencePawn >  , boost::noncopyable>("UAction_FaceThreat", no_init)
        .def("StaticClass", &UAction_FaceThreat::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStopSequence", &UAction_FaceThreat::eventStopSequence)
        .staticmethod("StaticClass")
  ;
}