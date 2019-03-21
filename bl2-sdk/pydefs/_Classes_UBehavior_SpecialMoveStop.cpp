#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpecialMoveStop()
{
    class_< UBehavior_SpecialMoveStop, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpecialMoveStop", no_init)
        .def_readwrite("SpecificMove", &UBehavior_SpecialMoveStop::SpecificMove)
        .def("StaticClass", &UBehavior_SpecialMoveStop::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SpecialMoveStop::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}