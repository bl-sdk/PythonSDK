#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGearboxAIController()
{
    class_< AGearboxAIController, bases< AAIController >  , boost::noncopyable>("AGearboxAIController", no_init)
        .def("StaticClass", &AGearboxAIController::StaticClass, return_value_policy< reference_existing_object >())
        .def("ForceMoveToActor", &AGearboxAIController::ForceMoveToActor)
        .staticmethod("StaticClass")
  ;
}