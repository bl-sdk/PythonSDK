#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorForgetAboutTarget()
{
    class_< UTargetIteratorForgetAboutTarget, bases< UTargetIterator >  , boost::noncopyable>("UTargetIteratorForgetAboutTarget", no_init)
        .def("StaticClass", &UTargetIteratorForgetAboutTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}