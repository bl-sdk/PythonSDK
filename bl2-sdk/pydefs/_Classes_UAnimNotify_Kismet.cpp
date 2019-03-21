#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_Kismet()
{
    class_< UAnimNotify_Kismet, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_Kismet", no_init)
        .def_readwrite("NotifyName", &UAnimNotify_Kismet::NotifyName)
        .def("StaticClass", &UAnimNotify_Kismet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}