#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARigidBodyBase()
{
    class_< ARigidBodyBase, bases< AActor >  , boost::noncopyable>("ARigidBodyBase", no_init)
        .def("StaticClass", &ARigidBodyBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}