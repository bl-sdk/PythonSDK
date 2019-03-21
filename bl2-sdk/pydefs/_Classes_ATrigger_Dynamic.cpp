#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATrigger_Dynamic()
{
    class_< ATrigger_Dynamic, bases< ATrigger >  , boost::noncopyable>("ATrigger_Dynamic", no_init)
        .def("StaticClass", &ATrigger_Dynamic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}