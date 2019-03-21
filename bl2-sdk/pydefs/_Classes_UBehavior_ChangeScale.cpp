#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeScale()
{
    class_< UBehavior_ChangeScale, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeScale", no_init)
        .def_readwrite("Scale", &UBehavior_ChangeScale::Scale)
        .def("StaticClass", &UBehavior_ChangeScale::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeScale::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}