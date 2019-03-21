#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AKeypoint()
{
    class_< AKeypoint, bases< AActor >  , boost::noncopyable>("AKeypoint", no_init)
        .def_readwrite("SpriteComp", &AKeypoint::SpriteComp)
        .def("StaticClass", &AKeypoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}