#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIPatsy()
{
    class_< UBehavior_AIPatsy, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIPatsy", no_init)
        .def_readwrite("Patsy", &UBehavior_AIPatsy::Patsy)
        .def("StaticClass", &UBehavior_AIPatsy::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AIPatsy::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}