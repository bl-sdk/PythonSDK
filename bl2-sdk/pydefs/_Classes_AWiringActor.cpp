#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWiringActor()
{
    class_< AWiringActor, bases< AStaticMeshActor >  , boost::noncopyable>("AWiringActor", no_init)
        .def("StaticClass", &AWiringActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}