#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFailedConnect()
{
    class_< UFailedConnect, bases< ULocalMessage >  , boost::noncopyable>("UFailedConnect", no_init)
        .def_readonly("FailMessage", &UFailedConnect::FailMessage)
        .def("StaticClass", &UFailedConnect::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UFailedConnect::GetString)
        .def("GetFailSwitch", &UFailedConnect::GetFailSwitch)
        .staticmethod("StaticClass")
  ;
}