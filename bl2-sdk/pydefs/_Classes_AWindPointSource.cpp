#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWindPointSource()
{
    class_< AWindPointSource, bases< AInfo >  , boost::noncopyable>("AWindPointSource", no_init)
        .def_readwrite("Component", &AWindPointSource::Component)
        .def("StaticClass", &AWindPointSource::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}