#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PackAttack()
{
    class_< UBehavior_PackAttack, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PackAttack", no_init)
        .def("StaticClass", &UBehavior_PackAttack::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}