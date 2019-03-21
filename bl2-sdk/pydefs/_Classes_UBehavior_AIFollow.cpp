#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIFollow()
{
    class_< UBehavior_AIFollow, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIFollow", no_init)
        .def_readwrite("ToFollow", &UBehavior_AIFollow::ToFollow)
        .def_readwrite("Action", &UBehavior_AIFollow::Action)
        .def_readwrite("Stance", &UBehavior_AIFollow::Stance)
        .def_readwrite("CatchupDistance", &UBehavior_AIFollow::CatchupDistance)
        .def_readwrite("HoldStillDistance", &UBehavior_AIFollow::HoldStillDistance)
        .def("StaticClass", &UBehavior_AIFollow::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AIFollow::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}