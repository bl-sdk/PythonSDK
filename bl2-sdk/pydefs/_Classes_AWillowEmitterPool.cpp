#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowEmitterPool()
{
    class_< AWillowEmitterPool, bases< AEmitterPool >  , boost::noncopyable>("AWillowEmitterPool", no_init)
        .def("StaticClass", &AWillowEmitterPool::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}