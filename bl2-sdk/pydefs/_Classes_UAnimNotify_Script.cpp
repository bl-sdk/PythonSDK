#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_Script()
{
    class_< UAnimNotify_Script, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_Script", no_init)
        .def_readwrite("NotifyName", &UAnimNotify_Script::NotifyName)
        .def_readwrite("NotifyTickName", &UAnimNotify_Script::NotifyTickName)
        .def_readwrite("NotifyEndName", &UAnimNotify_Script::NotifyEndName)
        .def("StaticClass", &UAnimNotify_Script::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}