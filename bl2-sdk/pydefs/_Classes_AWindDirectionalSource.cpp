#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWindDirectionalSource()
{
    class_< AWindDirectionalSource, bases< AInfo >  , boost::noncopyable>("AWindDirectionalSource", no_init)
        .def_readwrite("Component", &AWindDirectionalSource::Component)
        .def("StaticClass", &AWindDirectionalSource::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}