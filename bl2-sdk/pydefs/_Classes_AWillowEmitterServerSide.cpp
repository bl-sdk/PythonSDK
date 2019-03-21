#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowEmitterServerSide()
{
    class_< AWillowEmitterServerSide, bases< AWillowReplicatedEmitter >  , boost::noncopyable>("AWillowEmitterServerSide", no_init)
        .def("StaticClass", &AWillowEmitterServerSide::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}