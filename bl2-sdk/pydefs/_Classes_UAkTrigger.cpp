#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkTrigger()
{
    class_< UAkTrigger, bases< UAkObject >  , boost::noncopyable>("UAkTrigger", no_init)
        .def("StaticClass", &UAkTrigger::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}