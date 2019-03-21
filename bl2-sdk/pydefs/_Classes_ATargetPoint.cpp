#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATargetPoint()
{
    class_< ATargetPoint, bases< AKeypoint >  , boost::noncopyable>("ATargetPoint", no_init)
        .def_readwrite("SpawnRefCount", &ATargetPoint::SpawnRefCount)
        .def("StaticClass", &ATargetPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}