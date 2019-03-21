#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCollisionSize()
{
    class_< UBehavior_ChangeCollisionSize, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeCollisionSize", no_init)
        .def_readwrite("Radius", &UBehavior_ChangeCollisionSize::Radius)
        .def_readwrite("Height", &UBehavior_ChangeCollisionSize::Height)
        .def("StaticClass", &UBehavior_ChangeCollisionSize::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCollisionSize::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}