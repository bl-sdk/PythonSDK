#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_PrismaticSetup()
{
    class_< URB_PrismaticSetup, bases< URB_ConstraintSetup >  , boost::noncopyable>("URB_PrismaticSetup", no_init)
        .def("StaticClass", &URB_PrismaticSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}