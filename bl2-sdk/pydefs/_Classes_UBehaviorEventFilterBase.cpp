#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorEventFilterBase()
{
    class_< UBehaviorEventFilterBase, bases< UObject >  , boost::noncopyable>("UBehaviorEventFilterBase", no_init)
        .def("StaticClass", &UBehaviorEventFilterBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}