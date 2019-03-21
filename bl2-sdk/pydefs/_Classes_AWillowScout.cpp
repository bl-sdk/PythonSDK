#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowScout()
{
    class_< AWillowScout, bases< AScout >  , boost::noncopyable>("AWillowScout", no_init)
        .def("StaticClass", &AWillowScout::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}