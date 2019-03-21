#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PostAkEventGetRTPC()
{
    class_< UBehavior_PostAkEventGetRTPC, bases< UBehavior_PostAkEvent >  , boost::noncopyable>("UBehavior_PostAkEventGetRTPC", no_init)
        .def_readwrite("RTPC", &UBehavior_PostAkEventGetRTPC::RTPC)
        .def_readwrite("LastValue", &UBehavior_PostAkEventGetRTPC::LastValue)
        .def("StaticClass", &UBehavior_PostAkEventGetRTPC::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_PostAkEventGetRTPC::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_PostAkEventGetRTPC::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}