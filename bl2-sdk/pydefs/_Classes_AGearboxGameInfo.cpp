#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGearboxGameInfo()
{
    class_< AGearboxGameInfo, bases< AGameInfo >  , boost::noncopyable>("AGearboxGameInfo", no_init)
        .def("StaticClass", &AGearboxGameInfo::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostLogin", &AGearboxGameInfo::eventPostLogin)
        .staticmethod("StaticClass")
  ;
}