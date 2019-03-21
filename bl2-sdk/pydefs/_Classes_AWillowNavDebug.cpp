#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowNavDebug()
{
    class_< AWillowNavDebug, bases< AActor >  , boost::noncopyable>("AWillowNavDebug", no_init)
        .def("StaticClass", &AWillowNavDebug::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}