#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkStateGroup()
{
    class_< UAkStateGroup, bases< UAkObject >  , boost::noncopyable>("UAkStateGroup", no_init)
        .def("StaticClass", &UAkStateGroup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}