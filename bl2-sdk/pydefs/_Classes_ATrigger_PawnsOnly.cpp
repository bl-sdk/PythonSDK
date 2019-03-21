#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATrigger_PawnsOnly()
{
    class_< ATrigger_PawnsOnly, bases< ATrigger >  , boost::noncopyable>("ATrigger_PawnsOnly", no_init)
        .def("StaticClass", &ATrigger_PawnsOnly::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}