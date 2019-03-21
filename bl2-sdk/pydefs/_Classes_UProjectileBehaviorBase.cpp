#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehaviorBase()
{
    class_< UProjectileBehaviorBase, bases< UBehaviorBase >  , boost::noncopyable>("UProjectileBehaviorBase", no_init)
        .def("StaticClass", &UProjectileBehaviorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}