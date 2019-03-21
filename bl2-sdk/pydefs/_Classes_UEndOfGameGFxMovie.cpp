#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEndOfGameGFxMovie()
{
    class_< UEndOfGameGFxMovie, bases< UWillowGFxMovie >  , boost::noncopyable>("UEndOfGameGFxMovie", no_init)
        .def_readwrite("ConsoleEvent", &UEndOfGameGFxMovie::ConsoleEvent)
        .def("StaticClass", &UEndOfGameGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("extCancel", &UEndOfGameGFxMovie::extCancel)
        .def("extConfirmRestart", &UEndOfGameGFxMovie::extConfirmRestart)
        .def("eventStart", &UEndOfGameGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}