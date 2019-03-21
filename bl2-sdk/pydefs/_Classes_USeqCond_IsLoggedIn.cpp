#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsLoggedIn()
{
    class_< USeqCond_IsLoggedIn, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IsLoggedIn", no_init)
        .def_readwrite("NumNeededLoggedIn", &USeqCond_IsLoggedIn::NumNeededLoggedIn)
        .def("StaticClass", &USeqCond_IsLoggedIn::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventCheckLogins", &USeqCond_IsLoggedIn::eventCheckLogins)
        .staticmethod("StaticClass")
  ;
}