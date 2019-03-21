#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_Scripted()
{
    class_< UAnimNotify_Scripted, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_Scripted", no_init)
        .def("StaticClass", &UAnimNotify_Scripted::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotifyEnd", &UAnimNotify_Scripted::eventNotifyEnd)
        .def("eventNotify", &UAnimNotify_Scripted::eventNotify)
        .staticmethod("StaticClass")
  ;
}