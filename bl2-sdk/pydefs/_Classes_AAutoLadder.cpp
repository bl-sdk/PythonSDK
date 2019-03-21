#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAutoLadder()
{
    class_< AAutoLadder, bases< ALadder >  , boost::noncopyable>("AAutoLadder", no_init)
        .def("StaticClass", &AAutoLadder::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}