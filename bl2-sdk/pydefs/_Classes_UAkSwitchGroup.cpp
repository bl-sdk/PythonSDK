#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkSwitchGroup()
{
    class_< UAkSwitchGroup, bases< UAkObject >  , boost::noncopyable>("UAkSwitchGroup", no_init)
        .def("StaticClass", &UAkSwitchGroup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}